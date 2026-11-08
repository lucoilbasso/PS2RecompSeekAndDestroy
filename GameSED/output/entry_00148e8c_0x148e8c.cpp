#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00148e8c
// Address: 0x148e8c - 0x148ed4
void entry_00148e8c_0x148e8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148e8c_0x148e8c");
#endif

    ctx->pc = 0x148e8cu;

    // 0x148e8c: 0x240218e3  addiu       $v0, $zero, 0x18E3
    ctx->pc = 0x148e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6371));
    // 0x148e90: 0x70c210e8  pminw       $v0, $a2, $v0
    ctx->pc = 0x148e90u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x148e94: 0x23000  sll         $a2, $v0, 0
    ctx->pc = 0x148e94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x148e98: 0x2403e71d  addiu       $v1, $zero, -0x18E3
    ctx->pc = 0x148e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294960925));
    // 0x148e9c: 0x70c318c8  pmaxw       $v1, $a2, $v1
    ctx->pc = 0x148e9cu;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 3)));
    // 0x148ea0: 0x33000  sll         $a2, $v1, 0
    ctx->pc = 0x148ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x148ea4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x148ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x148ea8: 0x2484f640  addiu       $a0, $a0, -0x9C0
    ctx->pc = 0x148ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964800));
    // 0x148eac: 0x30c37fff  andi        $v1, $a2, 0x7FFF
    ctx->pc = 0x148eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32767);
    // 0x148eb0: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x148eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x148eb4: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x148eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x148eb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x148eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x148ebc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x148ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x148ec0: 0x3c0143a0  lui         $at, 0x43A0
    ctx->pc = 0x148ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17312 << 16));
    // 0x148ec4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x148ec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148ec8: 0x24c22000  addiu       $v0, $a2, 0x2000
    ctx->pc = 0x148ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8192));
    // 0x148ecc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x148eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148ed0: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x148ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    ctx->pc = 0x148ed4u;
}
