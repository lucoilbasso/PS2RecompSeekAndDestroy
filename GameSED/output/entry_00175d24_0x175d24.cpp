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

// Function: entry_00175d24
// Address: 0x175d24 - 0x175d6c
void entry_00175d24_0x175d24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175d24_0x175d24");
#endif

    switch (ctx->pc) {
        case 0x175d30u: goto label_175d30;
        case 0x175d50u: goto label_175d50;
        default: break;
    }

    ctx->pc = 0x175d24u;

    // 0x175d24: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x175d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x175d28: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x175D28u;
    SET_GPR_U32(ctx, 31, 0x175D30u);
    ctx->pc = 0x175D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175D28u;
    // 0x175d2c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x175D28u, 0x175D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175D30u;
label_175d30:
    // 0x175d30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175d34: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x175d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x175d38: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x175d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x175d3c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x175d3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x175d40: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x175D40u;
    {
        const bool branch_taken_0x175d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175D40u;
        // 0x175d44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175d40) {
            ctx->pc = 0x175E14u;
            return;
        }
    }
    ctx->pc = 0x175D48u;
    // 0x175d48: 0xc05d6e8  jal         func_175BA0
    ctx->pc = 0x175D48u;
    SET_GPR_U32(ctx, 31, 0x175D50u);
    ctx->pc = 0x175BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175BA0u, 0x175D48u, 0x175D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175D50u;
label_175d50:
    // 0x175d50: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x175d50u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x175d54: 0x4a30005  bgezl       $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x175D54u;
    {
        const bool branch_taken_0x175d54 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x175d54) {
            ctx->pc = 0x175D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175D54u;
            // 0x175d58: 0x8e03005c  lw          $v1, 0x5C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175D6Cu;
            return;
        }
    }
    ctx->pc = 0x175D5Cu;
    // 0x175d5c: 0xde220008  ld          $v0, 0x8($s1)
    ctx->pc = 0x175d5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x175d60: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x175D60u;
    {
        const bool branch_taken_0x175d60 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x175D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175D60u;
        // 0x175d64: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175d60) {
            ctx->pc = 0x175E14u;
            return;
        }
    }
    ctx->pc = 0x175D68u;
    // 0x175d68: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x175d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->pc = 0x175d6cu;
}
