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

// Function: entry_00118c08
// Address: 0x118c08 - 0x118c38
void entry_00118c08_0x118c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118c08_0x118c08");
#endif

    switch (ctx->pc) {
        case 0x118c14u: goto label_118c14;
        default: break;
    }

    ctx->pc = 0x118c08u;

label_118c08:
    // 0x118c08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_118c0c:
    // 0x118c0c: 0xc045360  jal         func_114D80
label_118c10:
    if (ctx->pc == 0x118C10u) {
        ctx->pc = 0x118C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C0Cu;
        // 0x118c10: 0x22403  sra         $a0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118C14u;
        goto label_118c14;
    }
    ctx->pc = 0x118C0Cu;
    SET_GPR_U32(ctx, 31, 0x118C14u);
    ctx->pc = 0x118C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118C0Cu;
    // 0x118c10: 0x22403  sra         $a0, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x118C0Cu, 0x118C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C14u;
label_118c14:
    // 0x118c14: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x118c14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_118c18:
    // 0x118c18: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_118c1c:
    if (ctx->pc == 0x118C1Cu) {
        ctx->pc = 0x118C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C18u;
        // 0x118c1c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118C20u;
        goto label_118c20;
    }
    ctx->pc = 0x118C18u;
    {
        const bool branch_taken_0x118c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C18u;
        // 0x118c1c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c18) {
            ctx->pc = 0x118C8Cu;
            return;
        }
    }
    ctx->pc = 0x118C20u;
label_118c20:
    // 0x118c20: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x118c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_118c24:
    // 0x118c24: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x118c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_118c28:
    // 0x118c28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x118c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_118c2c:
    // 0x118c2c: 0x8c634720  lw          $v1, 0x4720($v1)
    ctx->pc = 0x118c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18208)));
label_118c30:
    // 0x118c30: 0x600008  jr          $v1
label_118c34:
    if (ctx->pc == 0x118C34u) {
        ctx->pc = 0x118C38u;
        goto label_fallthrough_0x118c30;
    }
    ctx->pc = 0x118C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118C30u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x118c30:
    ctx->pc = 0x118C38u;
}
