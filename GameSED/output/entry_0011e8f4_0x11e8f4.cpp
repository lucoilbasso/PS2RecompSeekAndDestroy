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

// Function: entry_0011e8f4
// Address: 0x11e8f4 - 0x11e930
void entry_0011e8f4_0x11e8f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e8f4_0x11e8f4");
#endif

    ctx->pc = 0x11e8f4u;

    // 0x11e8f4: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x11e8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x11e8f8: 0x8c870030  lw          $a3, 0x30($a0)
    ctx->pc = 0x11e8f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x11e8fc: 0x90c30006  lbu         $v1, 0x6($a2)
    ctx->pc = 0x11e8fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x11e900: 0x90e20006  lbu         $v0, 0x6($a3)
    ctx->pc = 0x11e900u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x11e904: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11E904u;
    {
        const bool branch_taken_0x11e904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11e904) {
            ctx->pc = 0x11E908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E904u;
            // 0x11e908: 0xa0a30002  sb          $v1, 0x2($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E930u;
            return;
        }
    }
    ctx->pc = 0x11E90Cu;
    // 0x11e90c: 0x90c30006  lbu         $v1, 0x6($a2)
    ctx->pc = 0x11e90cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x11e910: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x11e910u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11e914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11e914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e918: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11e918u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11e91c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11e91cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11e920: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11e920u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x11e924: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x11e924u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11e928: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x11e928u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11e92c: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x11e92cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x11e930u;
}
