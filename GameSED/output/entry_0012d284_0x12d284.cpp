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

// Function: entry_0012d284
// Address: 0x12d284 - 0x12d2e0
void entry_0012d284_0x12d284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d284_0x12d284");
#endif

    switch (ctx->pc) {
        case 0x12d294u: goto label_12d294;
        case 0x12d29cu: goto label_12d29c;
        case 0x12d2d8u: goto label_12d2d8;
        default: break;
    }

    ctx->pc = 0x12d284u;

    // 0x12d284: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12d284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12d288: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12d288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12d28c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x12D28Cu;
    SET_GPR_U32(ctx, 31, 0x12D294u);
    ctx->pc = 0x12D290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D28Cu;
    // 0x12d290: 0x240403f6  addiu       $a0, $zero, 0x3F6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1014));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x12D28Cu, 0x12D294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D294u;
label_12d294:
    // 0x12d294: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x12D294u;
    SET_GPR_U32(ctx, 31, 0x12D29Cu);
    ctx->pc = 0x12D298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D294u;
    // 0x12d298: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x12D294u, 0x12D29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D29Cu;
label_12d29c:
    // 0x12d29c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x12d29cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x12d2a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12d2a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d2a4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x12d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x12d2a8: 0x2442eae8  addiu       $v0, $v0, -0x1518
    ctx->pc = 0x12d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961896));
    // 0x12d2ac: 0x24a55e58  addiu       $a1, $a1, 0x5E58
    ctx->pc = 0x12d2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24152));
    // 0x12d2b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12d2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d2b4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x12d2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12d2b8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x12d2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x12d2bc: 0xae000154  sw          $zero, 0x154($s0)
    ctx->pc = 0x12d2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
    // 0x12d2c0: 0xae000158  sw          $zero, 0x158($s0)
    ctx->pc = 0x12d2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 0));
    // 0x12d2c4: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x12d2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
    // 0x12d2c8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D2C8u;
    {
        const bool branch_taken_0x12d2c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2C8u;
        // 0x12d2cc: 0xae000150  sw          $zero, 0x150($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d2c8) {
            ctx->pc = 0x12D2E0u;
            return;
        }
    }
    ctx->pc = 0x12D2D0u;
    // 0x12d2d0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x12D2D0u;
    SET_GPR_U32(ctx, 31, 0x12D2D8u);
    ctx->pc = 0x12D2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D2D0u;
    // 0x12d2d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x12D2D0u, 0x12D2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D2D8u;
label_12d2d8:
    // 0x12d2d8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x12D2D8u;
    {
        const bool branch_taken_0x12d2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2D8u;
        // 0x12d2dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d2d8) {
            ctx->pc = 0x12D324u;
            return;
        }
    }
    ctx->pc = 0x12D2E0u;
}
