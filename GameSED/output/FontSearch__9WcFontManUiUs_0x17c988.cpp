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

// Function: FontSearch__9WcFontManUiUs
// Address: 0x17c988 - 0x17c9ec
void FontSearch__9WcFontManUiUs_0x17c988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FontSearch__9WcFontManUiUs_0x17c988");
#endif

    switch (ctx->pc) {
        case 0x17c9b8u: goto label_17c9b8;
        case 0x17c9d0u: goto label_17c9d0;
        default: break;
    }

    ctx->pc = 0x17c988u;

    // 0x17c988: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x17c988u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x17c98c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c98cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c990: 0x2cc200ff  sltiu       $v0, $a2, 0xFF
    ctx->pc = 0x17c990u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x17c994: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17c994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17c998: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17c998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17c99c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17c99cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c9a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17c9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17c9a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17c9a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c9a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17C9A8u;
    {
        const bool branch_taken_0x17c9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C9A8u;
        // 0x17c9ac: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c9a8) {
            ctx->pc = 0x17C9BCu;
            goto label_17c9bc;
        }
    }
    ctx->pc = 0x17C9B0u;
    // 0x17c9b0: 0xc05f2c8  jal         func_17CB20
    ctx->pc = 0x17C9B0u;
    SET_GPR_U32(ctx, 31, 0x17C9B8u);
    ctx->pc = 0x17CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CB20u, 0x17C9B0u, 0x17C9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C9B8u;
label_17c9b8:
    // 0x17c9b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17c9b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17c9bc:
    // 0x17c9bc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x17c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17c9c0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x17c9c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c9c4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17c9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17c9c8: 0xc060fec  jal         func_183FB0
    ctx->pc = 0x17C9C8u;
    SET_GPR_U32(ctx, 31, 0x17C9D0u);
    ctx->pc = 0x17C9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C9C8u;
    // 0x17c9cc: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183FB0u, 0x17C9C8u, 0x17C9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C9D0u;
label_17c9d0:
    // 0x17c9d0: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x17c9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x17c9d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17c9d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17c9d8: 0x62100a  movz        $v0, $v1, $v0
    ctx->pc = 0x17c9d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x17c9dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17c9dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c9e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17c9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x17C9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C9E4u;
        // 0x17c9e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C9ECu;
}
