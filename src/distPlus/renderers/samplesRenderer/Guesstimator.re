[@bs.deriving abstract]
type discrete = {
  xs: array(float),
  ys: array(float),
};

let jsToDistDiscrete = (d: discrete): DistTypes.discreteShape => {xyShape: {
  xs: xsGet(d),
  ys: ysGet(d),
}, knownIntegralSum: None};

[@bs.module "./GuesstimatorLibrary.js"]
external stringToSamples: (string, int) => array(float) = "stringToSamples";
