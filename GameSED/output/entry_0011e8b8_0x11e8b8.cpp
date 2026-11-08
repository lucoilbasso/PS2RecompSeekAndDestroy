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

// Function: entry_0011e8b8
// Address: 0x11e8b8 - 0x11e8f4
void entry_0011e8b8_0x11e8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e8b8_0x11e8b8");
#endif

    ctx->pc = 0x11e8b8u;

    // 0x11e8b8: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x11e8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x11e8bc: 0x8c870030  lw          $a3, 0x30($a0)
    ctx->pc = 0x11e8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x11e8c0: 0x90c30005  lbu         $v1, 0x5($a2)
    ctx->pc = 0x11e8c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x11e8c4: 0x90e20005  lbu         $v0, 0x5($a3)
    ctx->pc = 0x11e8c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x11e8c8: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11E8C8u;
    {
        const bool branch_taken_0x11e8c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11e8c8) {
            ctx->pc = 0x11E8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E8C8u;
            // 0x11e8cc: 0xa0a30001  sb          $v1, 0x1($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E8F4u;
            return;
        }
    }
    ctx->pc = 0x11E8D0u;
    // 0x11e8d0: 0x90c30005  lbu         $v1, 0x5($a2)
    ctx->pc = 0x11e8d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x11e8d4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x11e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11e8d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11e8d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e8dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11e8dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11e8e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11e8e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11e8e4: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11e8e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x11e8e8: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x11e8e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11e8ec: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x11e8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11e8f0: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x11e8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x11e8f4u;
}
