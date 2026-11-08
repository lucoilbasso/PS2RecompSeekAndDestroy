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

// Function: Init__8WcExtent
// Address: 0x189610 - 0x189668
void Init__8WcExtent_0x189610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__8WcExtent_0x189610");
#endif

    switch (ctx->pc) {
        case 0x189624u: goto label_189624;
        default: break;
    }

    ctx->pc = 0x189610u;

    // 0x189610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x189610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x189614: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x189614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x189618: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x189618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x18961c: 0xc061258  jal         func_184960
    ctx->pc = 0x18961Cu;
    SET_GPR_U32(ctx, 31, 0x189624u);
    ctx->pc = 0x189620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18961Cu;
    // 0x189620: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x18961Cu, 0x189624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189624u;
label_189624:
    // 0x189624: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x189624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x189628: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x189628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x18962c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18962cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x189630: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x189630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x189634: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x189634u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x189638: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x189638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18963c: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x18963cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x189640: 0x90a3ed70  lbu         $v1, -0x1290($a1)
    ctx->pc = 0x189640u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x21ED70u));
    // 0x189644: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x189644u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x189648: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x189648u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x18964c: 0x8cc2d630  lw          $v0, -0x29D0($a2)
    ctx->pc = 0x18964cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x25D630u));
    // 0x189650: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x189650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
    // 0x189654: 0xae000164  sw          $zero, 0x164($s0)
    ctx->pc = 0x189654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
    // 0x189658: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x189658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18965c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18965cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189660: 0x3e00008  jr          $ra
    ctx->pc = 0x189660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189660u;
        // 0x189664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189668u;
}
