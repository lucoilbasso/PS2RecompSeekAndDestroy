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

// Function: entry_001a299c
// Address: 0x1a299c - 0x1a29d0
void entry_001a299c_0x1a299c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a299c_0x1a299c");
#endif

    switch (ctx->pc) {
        case 0x1a29c4u: goto label_1a29c4;
        default: break;
    }

    ctx->pc = 0x1a299cu;

label_1a299c:
    // 0x1a299c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a299cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a29a0:
    // 0x1a29a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a29a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a29a4:
    // 0x1a29a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a29a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1a29a8:
    // 0x1a29a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a29a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1a29ac:
    // 0x1a29ac: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1a29acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1a29b0:
    // 0x1a29b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a29b4:
    if (ctx->pc == 0x1A29B4u) {
        ctx->pc = 0x1A29B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29B0u;
        // 0x1a29b4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A29B8u;
        goto label_1a29b8;
    }
    ctx->pc = 0x1A29B0u;
    {
        const bool branch_taken_0x1a29b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A29B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29B0u;
        // 0x1a29b4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a29b0) {
            ctx->pc = 0x1A29D0u;
            return;
        }
    }
    ctx->pc = 0x1A29B8u;
label_1a29b8:
    // 0x1a29b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a29b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a29bc:
    // 0x1a29bc: 0x40f809  jalr        $v0
label_1a29c0:
    if (ctx->pc == 0x1A29C0u) {
        ctx->pc = 0x1A29C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29BCu;
        // 0x1a29c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A29C4u;
        goto label_1a29c4;
    }
    ctx->pc = 0x1A29BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A29C4u);
        ctx->pc = 0x1A29C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29BCu;
        // 0x1a29c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A29BCu, 0x1A29C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A29C4u;
label_1a29c4:
    // 0x1a29c4: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a29c8:
    if (ctx->pc == 0x1A29C8u) {
        ctx->pc = 0x1A29C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29C4u;
        // 0x1a29c8: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A29CCu;
        goto label_1a29cc;
    }
    ctx->pc = 0x1A29C4u;
    {
        const bool branch_taken_0x1a29c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A29C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29C4u;
        // 0x1a29c8: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a29c4) {
            ctx->pc = 0x1A29FCu;
            return;
        }
    }
    ctx->pc = 0x1A29CCu;
label_1a29cc:
    // 0x1a29cc: 0x0  nop
    ctx->pc = 0x1a29ccu;
    // NOP
    ctx->pc = 0x1a29d0u;
}
