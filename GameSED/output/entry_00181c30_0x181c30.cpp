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

// Function: entry_00181c30
// Address: 0x181c30 - 0x181c60
void entry_00181c30_0x181c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181c30_0x181c30");
#endif

    ctx->pc = 0x181c30u;

    // 0x181c30: 0x95c20002  lhu         $v0, 0x2($t6)
    ctx->pc = 0x181c30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x181c34: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x181c34u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c38: 0x302102a  slt         $v0, $t8, $v0
    ctx->pc = 0x181c38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x181c3c: 0x10400137  beqz        $v0, . + 4 + (0x137 << 2)
    ctx->pc = 0x181C3Cu;
    {
        const bool branch_taken_0x181c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C3Cu;
        // 0x181c40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181c3c) {
            ctx->pc = 0x18211Cu;
            return;
        }
    }
    ctx->pc = 0x181C44u;
    // 0x181c44: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x181c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x181c48: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x181c48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x181c4c: 0xc7888578  lwc1        $f8, -0x7A88($gp)
    ctx->pc = 0x181c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x181c50: 0x2459dbc0  addiu       $t9, $v0, -0x2440
    ctx->pc = 0x181c50u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x181c54: 0x3c01bb80  lui         $at, 0xBB80
    ctx->pc = 0x181c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48000 << 16));
    // 0x181c58: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x181c58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x181c5c: 0xc786857c  lwc1        $f6, -0x7A84($gp)
    ctx->pc = 0x181c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    ctx->pc = 0x181c60u;
}
