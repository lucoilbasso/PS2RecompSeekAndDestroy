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

// Function: entry_00147c18
// Address: 0x147c18 - 0x147c70
void entry_00147c18_0x147c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147c18_0x147c18");
#endif

    switch (ctx->pc) {
        case 0x147c28u: goto label_147c28;
        case 0x147c34u: goto label_147c34;
        case 0x147c40u: goto label_147c40;
        case 0x147c4cu: goto label_147c4c;
        default: break;
    }

    ctx->pc = 0x147c18u;

    // 0x147c18: 0x56020027  bnel        $s0, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x147C18u;
    {
        const bool branch_taken_0x147c18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x147c18) {
            ctx->pc = 0x147C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147C18u;
            // 0x147c1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147CB8u;
            return;
        }
    }
    ctx->pc = 0x147C20u;
    // 0x147c20: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x147C20u;
    SET_GPR_U32(ctx, 31, 0x147C28u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x147C20u, 0x147C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147C28u;
label_147c28:
    // 0x147c28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x147c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147c2c: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x147C2Cu;
    SET_GPR_U32(ctx, 31, 0x147C34u);
    ctx->pc = 0x147C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147C2Cu;
    // 0x147c30: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x147C2Cu, 0x147C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147C34u;
label_147c34:
    // 0x147c34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x147c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147c38: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x147C38u;
    SET_GPR_U32(ctx, 31, 0x147C40u);
    ctx->pc = 0x147C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147C38u;
    // 0x147c3c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x147C38u, 0x147C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147C40u;
label_147c40:
    // 0x147c40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x147c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147c44: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x147C44u;
    SET_GPR_U32(ctx, 31, 0x147C4Cu);
    ctx->pc = 0x147C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147C44u;
    // 0x147c48: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x147C44u, 0x147C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147C4Cu;
label_147c4c:
    // 0x147c4c: 0x6000010  bltz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x147C4Cu;
    {
        const bool branch_taken_0x147c4c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x147C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C4Cu;
        // 0x147c50: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147c4c) {
            ctx->pc = 0x147C90u;
            return;
        }
    }
    ctx->pc = 0x147C54u;
    // 0x147c54: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x147c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x147c58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x147c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147c5c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x147C5Cu;
    {
        const bool branch_taken_0x147c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x147C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C5Cu;
        // 0x147c60: 0x26240370  addiu       $a0, $s1, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147c5c) {
            ctx->pc = 0x147C70u;
            return;
        }
    }
    ctx->pc = 0x147C64u;
    // 0x147c64: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x147c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x147c68: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x147c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x147c6c: 0x24440378  addiu       $a0, $v0, 0x378
    ctx->pc = 0x147c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 888));
    ctx->pc = 0x147c70u;
}
