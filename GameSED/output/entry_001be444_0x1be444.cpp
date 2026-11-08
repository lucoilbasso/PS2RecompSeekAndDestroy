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

// Function: entry_001be444
// Address: 0x1be444 - 0x1be4a0
void entry_001be444_0x1be444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be444_0x1be444");
#endif

    switch (ctx->pc) {
        case 0x1be450u: goto label_1be450;
        case 0x1be474u: goto label_1be474;
        case 0x1be484u: goto label_1be484;
        case 0x1be490u: goto label_1be490;
        case 0x1be498u: goto label_1be498;
        default: break;
    }

    ctx->pc = 0x1be444u;

    // 0x1be444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be448: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1BE448u;
    SET_GPR_U32(ctx, 31, 0x1BE450u);
    ctx->pc = 0x1BE44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE448u;
    // 0x1be44c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1BE448u, 0x1BE450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE450u;
label_1be450:
    // 0x1be450: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1be450u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be458: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x1be458u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1be45c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1be45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be460: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x1be460u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x1be464: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x1be464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x1be468: 0xae030134  sw          $v1, 0x134($s0)
    ctx->pc = 0x1be468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 3));
    // 0x1be46c: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1BE46Cu;
    SET_GPR_U32(ctx, 31, 0x1BE474u);
    ctx->pc = 0x1BE470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE46Cu;
    // 0x1be470: 0xae020138  sw          $v0, 0x138($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1BE46Cu, 0x1BE474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE474u;
label_1be474:
    // 0x1be474: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BE474u;
    {
        const bool branch_taken_0x1be474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE474u;
        // 0x1be478: 0xae020840  sw          $v0, 0x840($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be474) {
            ctx->pc = 0x1BE4A0u;
            return;
        }
    }
    ctx->pc = 0x1BE47Cu;
    // 0x1be47c: 0xc0706c4  jal         func_1C1B10
    ctx->pc = 0x1BE47Cu;
    SET_GPR_U32(ctx, 31, 0x1BE484u);
    ctx->pc = 0x1BE480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE47Cu;
    // 0x1be480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1B10u, 0x1BE47Cu, 0x1BE484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE484u;
label_1be484:
    // 0x1be484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be488: 0xc0706b8  jal         func_1C1AE0
    ctx->pc = 0x1BE488u;
    SET_GPR_U32(ctx, 31, 0x1BE490u);
    ctx->pc = 0x1BE48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE488u;
    // 0x1be48c: 0x3c055000  lui         $a1, 0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1AE0u, 0x1BE488u, 0x1BE490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE490u;
label_1be490:
    // 0x1be490: 0xc0706c4  jal         func_1C1B10
    ctx->pc = 0x1BE490u;
    SET_GPR_U32(ctx, 31, 0x1BE498u);
    ctx->pc = 0x1BE494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE490u;
    // 0x1be494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1B10u, 0x1BE490u, 0x1BE498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE498u;
label_1be498:
    // 0x1be498: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE498u;
    {
        const bool branch_taken_0x1be498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE498u;
        // 0x1be49c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be498) {
            ctx->pc = 0x1BE4B8u;
            return;
        }
    }
    ctx->pc = 0x1BE4A0u;
}
