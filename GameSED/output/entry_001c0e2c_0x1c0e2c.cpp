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

// Function: entry_001c0e2c
// Address: 0x1c0e2c - 0x1c0e70
void entry_001c0e2c_0x1c0e2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0e2c_0x1c0e2c");
#endif

    switch (ctx->pc) {
        case 0x1c0e34u: goto label_1c0e34;
        case 0x1c0e50u: goto label_1c0e50;
        case 0x1c0e58u: goto label_1c0e58;
        default: break;
    }

    ctx->pc = 0x1c0e2cu;

label_1c0e2c:
    // 0x1c0e2c: 0xc070404  jal         func_1C1010
    ctx->pc = 0x1C0E2Cu;
    SET_GPR_U32(ctx, 31, 0x1C0E34u);
    ctx->pc = 0x1C0E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0E2Cu;
    // 0x1c0e30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1010u, 0x1C0E2Cu, 0x1C0E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0E34u;
label_1c0e34:
    // 0x1c0e34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c0e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0e38: 0x1214fffc  beq         $s0, $s4, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1C0E38u;
    {
        const bool branch_taken_0x1c0e38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x1C0E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E38u;
        // 0x1c0e3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e38) {
            ctx->pc = 0x1C0E2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0e2c;
        }
    }
    ctx->pc = 0x1C0E40u;
    // 0x1c0e40: 0x1213fff9  beq         $s0, $s3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C0E40u;
    {
        const bool branch_taken_0x1c0e40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x1c0e40) {
            ctx->pc = 0x1C0E28u;
            return;
        }
    }
    ctx->pc = 0x1C0E48u;
    // 0x1c0e48: 0xc0706c4  jal         func_1C1B10
    ctx->pc = 0x1C0E48u;
    SET_GPR_U32(ctx, 31, 0x1C0E50u);
    ctx->pc = 0x1C0E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0E48u;
    // 0x1c0e4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1B10u, 0x1C0E48u, 0x1C0E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0E50u;
label_1c0e50:
    // 0x1c0e50: 0xc070248  jal         func_1C0920
    ctx->pc = 0x1C0E50u;
    SET_GPR_U32(ctx, 31, 0x1C0E58u);
    ctx->pc = 0x1C0E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0E50u;
    // 0x1c0e54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0920u, 0x1C0E50u, 0x1C0E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0E58u;
label_1c0e58:
    // 0x1c0e58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c0e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c0e5c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c0e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c0e60: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x1c0e60u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x1c0e64: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x1c0e64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x1c0e68: 0x2611ffff  addiu       $s1, $s0, -0x1
    ctx->pc = 0x1c0e68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1c0e6c: 0x2e130001  sltiu       $s3, $s0, 0x1
    ctx->pc = 0x1c0e6cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1c0e70u;
}
