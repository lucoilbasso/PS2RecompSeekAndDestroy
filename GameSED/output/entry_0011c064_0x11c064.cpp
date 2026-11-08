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

// Function: entry_0011c064
// Address: 0x11c064 - 0x11c0b8
void entry_0011c064_0x11c064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c064_0x11c064");
#endif

    switch (ctx->pc) {
        case 0x11c084u: goto label_11c084;
        default: break;
    }

    ctx->pc = 0x11c064u;

    // 0x11c064: 0x2a62000c  slti        $v0, $s3, 0xC
    ctx->pc = 0x11c064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x11c068: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x11C068u;
    {
        const bool branch_taken_0x11c068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C068u;
        // 0x11c06c: 0x3270ffff  andi        $s0, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c068) {
            ctx->pc = 0x11BFD8u;
            return;
        }
    }
    ctx->pc = 0x11C070u;
    // 0x11c070: 0x269003b0  addiu       $s0, $s4, 0x3B0
    ctx->pc = 0x11c070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 944));
    // 0x11c074: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11c074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c078: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x11c078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x11c07c: 0xc045352  jal         func_114D48
    ctx->pc = 0x11C07Cu;
    SET_GPR_U32(ctx, 31, 0x11C084u);
    ctx->pc = 0x11C080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C07Cu;
    // 0x11c080: 0x240503c0  addiu       $a1, $zero, 0x3C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D48u, 0x11C07Cu, 0x11C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C084u;
label_11c084:
    // 0x11c084: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x11c084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x11c088: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11c088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11c08c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11c08cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c090: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11c090u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c094: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11c094u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c098: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x11c098u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c09c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x11c09cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11c0a0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x11c0a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c0a4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x11c0a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11c0a8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x11c0a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11c0ac: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x11c0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x11c0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x11C0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C0B0u;
        // 0x11c0b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C0B8u;
}
