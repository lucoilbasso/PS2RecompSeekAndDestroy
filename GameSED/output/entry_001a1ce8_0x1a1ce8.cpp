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

// Function: entry_001a1ce8
// Address: 0x1a1ce8 - 0x1a1d28
void entry_001a1ce8_0x1a1ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1ce8_0x1a1ce8");
#endif

    ctx->pc = 0x1a1ce8u;

label_1a1ce8:
    // 0x1a1ce8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1a1ce8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1a1cec:
    // 0x1a1cec: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1a1cecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_1a1cf0:
    // 0x1a1cf0: 0x9483000a  lhu         $v1, 0xA($a0)
    ctx->pc = 0x1a1cf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_1a1cf4:
    // 0x1a1cf4: 0x1060fffa  beqz        $v1, . + 4 + (-0x6 << 2)
label_1a1cf8:
    if (ctx->pc == 0x1A1CF8u) {
        ctx->pc = 0x1A1CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CF4u;
        // 0x1a1cf8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1CFCu;
        goto label_1a1cfc;
    }
    ctx->pc = 0x1A1CF4u;
    {
        const bool branch_taken_0x1a1cf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CF4u;
        // 0x1a1cf8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1cf4) {
            ctx->pc = 0x1A1CE0u;
            return;
        }
    }
    ctx->pc = 0x1A1CFCu;
label_1a1cfc:
    // 0x1a1cfc: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1a1cfcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1a1d00:
    // 0x1a1d00: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1a1d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a1d04:
    // 0x1a1d04: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x1a1d04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1a1d08:
    // 0x1a1d08: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1a1d0c:
    if (ctx->pc == 0x1A1D0Cu) {
        ctx->pc = 0x1A1D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D08u;
        // 0x1a1d0c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1D10u;
        goto label_1a1d10;
    }
    ctx->pc = 0x1A1D08u;
    {
        const bool branch_taken_0x1a1d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D08u;
        // 0x1a1d0c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1d08) {
            ctx->pc = 0x1A1D8Cu;
            return;
        }
    }
    ctx->pc = 0x1A1D10u;
label_1a1d10:
    // 0x1a1d10: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1a1d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
label_1a1d14:
    // 0x1a1d14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a1d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a1d18:
    // 0x1a1d18: 0x8c639180  lw          $v1, -0x6E80($v1)
    ctx->pc = 0x1a1d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939008)));
label_1a1d1c:
    // 0x1a1d1c: 0x600008  jr          $v1
label_1a1d20:
    if (ctx->pc == 0x1A1D20u) {
        ctx->pc = 0x1A1D24u;
        goto label_1a1d24;
    }
    ctx->pc = 0x1A1D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1D1Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A1D24u;
label_1a1d24:
    // 0x1a1d24: 0x0  nop
    ctx->pc = 0x1a1d24u;
    // NOP
    ctx->pc = 0x1a1d28u;
}
