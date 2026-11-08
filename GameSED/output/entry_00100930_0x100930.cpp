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

// Function: entry_00100930
// Address: 0x100930 - 0x100968
void entry_00100930_0x100930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100930_0x100930");
#endif

    ctx->pc = 0x100930u;

label_100930:
    // 0x100930: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x100930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_100934:
    // 0x100934: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x100934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_100938:
    // 0x100938: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x100938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10093c:
    // 0x10093c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10093cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100940:
    // 0x100940: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x100940u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_100944:
    // 0x100944: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_100948:
    if (ctx->pc == 0x100948u) {
        ctx->pc = 0x100948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100944u;
        // 0x100948: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10094Cu;
        goto label_10094c;
    }
    ctx->pc = 0x100944u;
    {
        const bool branch_taken_0x100944 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x100948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100944u;
        // 0x100948: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100944) {
            ctx->pc = 0x100968u;
            return;
        }
    }
    ctx->pc = 0x10094Cu;
label_10094c:
    // 0x10094c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x10094cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_100950:
    // 0x100950: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x100950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100954:
    // 0x100954: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x100954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_100958:
    // 0x100958: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x100958u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10095c:
    // 0x10095c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10095cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_100960:
    // 0x100960: 0x60f809  jalr        $v1
label_100964:
    if (ctx->pc == 0x100964u) {
        ctx->pc = 0x100964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100960u;
        // 0x100964: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100968u;
        goto label_fallthrough_0x100960;
    }
    ctx->pc = 0x100960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x100968u);
        ctx->pc = 0x100964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100960u;
        // 0x100964: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100960u, 0x100968u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x100960:
    ctx->pc = 0x100968u;
}
