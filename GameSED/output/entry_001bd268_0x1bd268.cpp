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

// Function: entry_001bd268
// Address: 0x1bd268 - 0x1bd2f4
void entry_001bd268_0x1bd268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd268_0x1bd268");
#endif

    switch (ctx->pc) {
        case 0x1bd27cu: goto label_1bd27c;
        case 0x1bd28cu: goto label_1bd28c;
        case 0x1bd29cu: goto label_1bd29c;
        case 0x1bd2acu: goto label_1bd2ac;
        case 0x1bd2bcu: goto label_1bd2bc;
        case 0x1bd2c8u: goto label_1bd2c8;
        case 0x1bd2dcu: goto label_1bd2dc;
        case 0x1bd2e8u: goto label_1bd2e8;
        default: break;
    }

    ctx->pc = 0x1bd268u;

    // 0x1bd268: 0x16b00045  bne         $s5, $s0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1BD268u;
    {
        const bool branch_taken_0x1bd268 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 16));
        ctx->pc = 0x1BD26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD268u;
        // 0x1bd26c: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd268) {
            ctx->pc = 0x1BD380u;
            return;
        }
    }
    ctx->pc = 0x1BD270u;
    // 0x1bd270: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd274: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD274u;
    SET_GPR_U32(ctx, 31, 0x1BD27Cu);
    ctx->pc = 0x1BD278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD274u;
    // 0x1bd278: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD274u, 0x1BD27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD27Cu;
label_1bd27c:
    // 0x1bd27c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bd27cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd280: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd284: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD284u;
    SET_GPR_U32(ctx, 31, 0x1BD28Cu);
    ctx->pc = 0x1BD288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD284u;
    // 0x1bd288: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD284u, 0x1BD28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD28Cu;
label_1bd28c:
    // 0x1bd28c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1bd28cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd290: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd294: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD294u;
    SET_GPR_U32(ctx, 31, 0x1BD29Cu);
    ctx->pc = 0x1BD298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD294u;
    // 0x1bd298: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD294u, 0x1BD29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD29Cu;
label_1bd29c:
    // 0x1bd29c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bd29cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd2a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd2a4: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD2A4u;
    SET_GPR_U32(ctx, 31, 0x1BD2ACu);
    ctx->pc = 0x1BD2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD2A4u;
    // 0x1bd2a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD2A4u, 0x1BD2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD2ACu;
label_1bd2ac:
    // 0x1bd2ac: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1bd2acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd2b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd2b4: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD2B4u;
    SET_GPR_U32(ctx, 31, 0x1BD2BCu);
    ctx->pc = 0x1BD2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD2B4u;
    // 0x1bd2b8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD2B4u, 0x1BD2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD2BCu;
label_1bd2bc:
    // 0x1bd2bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd2c0: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD2C0u;
    SET_GPR_U32(ctx, 31, 0x1BD2C8u);
    ctx->pc = 0x1BD2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD2C0u;
    // 0x1bd2c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD2C0u, 0x1BD2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD2C8u;
label_1bd2c8:
    // 0x1bd2c8: 0x1615000a  bne         $s0, $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x1BD2C8u;
    {
        const bool branch_taken_0x1bd2c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        ctx->pc = 0x1BD2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD2C8u;
        // 0x1bd2cc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd2c8) {
            ctx->pc = 0x1BD2F4u;
            return;
        }
    }
    ctx->pc = 0x1BD2D0u;
    // 0x1bd2d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd2d4: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD2D4u;
    SET_GPR_U32(ctx, 31, 0x1BD2DCu);
    ctx->pc = 0x1BD2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD2D4u;
    // 0x1bd2d8: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD2D4u, 0x1BD2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD2DCu;
label_1bd2dc:
    // 0x1bd2dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd2e0: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD2E0u;
    SET_GPR_U32(ctx, 31, 0x1BD2E8u);
    ctx->pc = 0x1BD2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD2E0u;
    // 0x1bd2e4: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD2E0u, 0x1BD2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD2E8u;
label_1bd2e8:
    // 0x1bd2e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd2ec: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD2ECu;
    SET_GPR_U32(ctx, 31, 0x1BD2F4u);
    ctx->pc = 0x1BD2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD2ECu;
    // 0x1bd2f0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD2ECu, 0x1BD2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD2F4u;
}
