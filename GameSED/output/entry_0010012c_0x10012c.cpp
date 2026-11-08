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

// Function: entry_0010012c
// Address: 0x10012c - 0x1001c8
void entry_0010012c_0x10012c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010012c_0x10012c");
#endif

    switch (ctx->pc) {
        case 0x10017cu: goto label_10017c;
        case 0x100198u: goto label_100198;
        case 0x1001a0u: goto label_1001a0;
        case 0x1001a8u: goto label_1001a8;
        case 0x1001c0u: goto label_1001c0;
        default: break;
    }

    ctx->pc = 0x10012cu;

label_10012c:
    // 0x10012c: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x10012cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x100130: 0x0  nop
    ctx->pc = 0x100130u;
    // NOP
    // 0x100134: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x100134u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x100138: 0x0  nop
    ctx->pc = 0x100138u;
    // NOP
    // 0x10013c: 0x0  nop
    ctx->pc = 0x10013cu;
    // NOP
    // 0x100140: 0x1420fffa  bnez        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x100140u;
    {
        const bool branch_taken_0x100140 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x100144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100140u;
        // 0x100144: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100140) {
            ctx->pc = 0x10012Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10012c;
        }
    }
    ctx->pc = 0x100148u;
    // 0x100148: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x100148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x10014c: 0x3c0501e0  lui         $a1, 0x1E0
    ctx->pc = 0x10014cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)480 << 16));
    // 0x100150: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x100150u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
    // 0x100154: 0x3c070026  lui         $a3, 0x26
    ctx->pc = 0x100154u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
    // 0x100158: 0x3c080010  lui         $t0, 0x10
    ctx->pc = 0x100158u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16 << 16));
    // 0x10015c: 0x24844870  addiu       $a0, $a0, 0x4870
    ctx->pc = 0x10015cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18544));
    // 0x100160: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x100160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
    // 0x100164: 0x24c60000  addiu       $a2, $a2, 0x0
    ctx->pc = 0x100164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
    // 0x100168: 0x24e7da80  addiu       $a3, $a3, -0x2580
    ctx->pc = 0x100168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957696));
    // 0x10016c: 0x250801d0  addiu       $t0, $t0, 0x1D0
    ctx->pc = 0x10016cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 464));
    // 0x100170: 0x80e02d  daddu       $gp, $a0, $zero
    ctx->pc = 0x100170u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100174: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x100174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x100178: 0xc  syscall     0
    ctx->pc = 0x100178u;
    ctx->pc = 0x10017Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10017c:
    // 0x10017c: 0x40e82d  daddu       $sp, $v0, $zero
    ctx->pc = 0x10017cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100180: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x100180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x100184: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x100184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x100188: 0x2484219c  addiu       $a0, $a0, 0x219C
    ctx->pc = 0x100188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8604));
    // 0x10018c: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x10018cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
    // 0x100190: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x100190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x100194: 0xc  syscall     0
    ctx->pc = 0x100194u;
    ctx->pc = 0x100198u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_100198:
    // 0x100198: 0xc06db8a  jal         func_1B6E28
    ctx->pc = 0x100198u;
    SET_GPR_U32(ctx, 31, 0x1001A0u);
    ctx->pc = 0x1B6E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E28u, 0x100198u, 0x1001A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1001A0u;
label_1001a0:
    // 0x1001a0: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x1001A0u;
    SET_GPR_U32(ctx, 31, 0x1001A8u);
    ctx->pc = 0x1001A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1001A0u;
    // 0x1001a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x1001A0u, 0x1001A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1001A8u;
label_1001a8:
    // 0x1001a8: 0x42000038  ei
    ctx->pc = 0x1001a8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1001ac: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1001acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1001b0: 0x2442da80  addiu       $v0, $v0, -0x2580
    ctx->pc = 0x1001b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957696));
    // 0x1001b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1001b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x25DA80u));
    // 0x1001b8: 0xc040076  jal         func_1001D8
    ctx->pc = 0x1001B8u;
    SET_GPR_U32(ctx, 31, 0x1001C0u);
    ctx->pc = 0x1001BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1001B8u;
    // 0x1001bc: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1001D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1001D8u, 0x1001B8u, 0x1001C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1001C0u;
label_1001c0:
    // 0x1001c0: 0x806dc84  j           func_1B7210
    ctx->pc = 0x1001C0u;
    ctx->pc = 0x1001C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1001C0u;
    // 0x1001c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7210u;
    Exit_0x1b7210(rdram, ctx, runtime); return;
    ctx->pc = 0x1001C8u;
}
