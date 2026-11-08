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

// Function: entry_00109158
// Address: 0x109158 - 0x1091c0
void entry_00109158_0x109158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109158_0x109158");
#endif

    switch (ctx->pc) {
        case 0x10917cu: goto label_10917c;
        case 0x109188u: goto label_109188;
        case 0x109194u: goto label_109194;
        default: break;
    }

    ctx->pc = 0x109158u;

    // 0x109158: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x109158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x10915c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x10915cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x109160: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x109160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x109164: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x109164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x109168: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x109168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x10916c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x10916cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x109170: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x109170u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109174: 0xc04110c  jal         func_104430
    ctx->pc = 0x109174u;
    SET_GPR_U32(ctx, 31, 0x10917Cu);
    ctx->pc = 0x109178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109174u;
    // 0x109178: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x109174u, 0x10917Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10917Cu;
label_10917c:
    // 0x10917c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10917cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109180: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x109180u;
    SET_GPR_U32(ctx, 31, 0x109188u);
    ctx->pc = 0x109184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109180u;
    // 0x109184: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109180u, 0x109188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109188u;
label_109188:
    // 0x109188: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x109188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10918c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10918Cu;
    SET_GPR_U32(ctx, 31, 0x109194u);
    ctx->pc = 0x109190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10918Cu;
    // 0x109190: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10918Cu, 0x109194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109194u;
label_109194:
    // 0x109194: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x109194u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109198: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x109198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x10919c: 0x16000028  bnez        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x10919Cu;
    {
        const bool branch_taken_0x10919c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1091A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10919Cu;
        // 0x1091a0: 0x2456fffd  addiu       $s6, $v0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10919c) {
            ctx->pc = 0x109240u;
            return;
        }
    }
    ctx->pc = 0x1091A4u;
    // 0x1091a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1091a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1091a8: 0x12820005  beq         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1091A8u;
    {
        const bool branch_taken_0x1091a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1091ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1091A8u;
        // 0x1091ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1091a8) {
            ctx->pc = 0x1091C0u;
            return;
        }
    }
    ctx->pc = 0x1091B0u;
    // 0x1091b0: 0x12820011  beq         $s4, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1091B0u;
    {
        const bool branch_taken_0x1091b0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1091B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1091B0u;
        // 0x1091b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1091b0) {
            ctx->pc = 0x1091F8u;
            return;
        }
    }
    ctx->pc = 0x1091B8u;
    // 0x1091b8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1091B8u;
    {
        const bool branch_taken_0x1091b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1091BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1091B8u;
        // 0x1091bc: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1091b8) {
            ctx->pc = 0x1092CCu;
            return;
        }
    }
    ctx->pc = 0x1091C0u;
}
