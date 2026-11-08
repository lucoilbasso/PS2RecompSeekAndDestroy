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

// Function: B_ModeTransfar__FP13ModeTransCtrli
// Address: 0x19d238 - 0x19d288
void B_ModeTransfar__FP13ModeTransCtrli_0x19d238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_ModeTransfar__FP13ModeTransCtrli_0x19d238");
#endif

    switch (ctx->pc) {
        case 0x19d238u: goto label_19d238;
        case 0x19d23cu: goto label_19d23c;
        case 0x19d240u: goto label_19d240;
        case 0x19d244u: goto label_19d244;
        case 0x19d248u: goto label_19d248;
        case 0x19d24cu: goto label_19d24c;
        case 0x19d250u: goto label_19d250;
        case 0x19d254u: goto label_19d254;
        case 0x19d258u: goto label_19d258;
        case 0x19d25cu: goto label_19d25c;
        case 0x19d260u: goto label_19d260;
        case 0x19d264u: goto label_19d264;
        case 0x19d268u: goto label_19d268;
        case 0x19d26cu: goto label_19d26c;
        case 0x19d270u: goto label_19d270;
        case 0x19d274u: goto label_19d274;
        case 0x19d278u: goto label_19d278;
        case 0x19d27cu: goto label_19d27c;
        case 0x19d280u: goto label_19d280;
        case 0x19d284u: goto label_19d284;
        default: break;
    }

    ctx->pc = 0x19d238u;

label_19d238:
    // 0x19d238: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_19d23c:
    // 0x19d23c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x19d23cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19d240:
    // 0x19d240: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19d244:
    // 0x19d244: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19d244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19d248:
    // 0x19d248: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x19d248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_19d24c:
    // 0x19d24c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x19d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_19d250:
    // 0x19d250: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x19d250u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_19d254:
    // 0x19d254: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19d258:
    // 0x19d258: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x19d258u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
label_19d25c:
    // 0x19d25c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x19d25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_19d260:
    // 0x19d260: 0xace60008  sw          $a2, 0x8($a3)
    ctx->pc = 0x19d260u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
label_19d264:
    // 0x19d264: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x19d264u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
label_19d268:
    // 0x19d268: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19d268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19d26c:
    // 0x19d26c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19d270:
    if (ctx->pc == 0x19D270u) {
        ctx->pc = 0x19D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D26Cu;
        // 0x19d270: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D274u;
        goto label_19d274;
    }
    ctx->pc = 0x19D26Cu;
    {
        const bool branch_taken_0x19d26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D26Cu;
        // 0x19d270: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d26c) {
            ctx->pc = 0x19D27Cu;
            goto label_19d27c;
        }
    }
    ctx->pc = 0x19D274u;
label_19d274:
    // 0x19d274: 0x40f809  jalr        $v0
label_19d278:
    if (ctx->pc == 0x19D278u) {
        ctx->pc = 0x19D278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D274u;
        // 0x19d278: 0x8ce40010  lw          $a0, 0x10($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D27Cu;
        goto label_19d27c;
    }
    ctx->pc = 0x19D274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19D27Cu);
        ctx->pc = 0x19D278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D274u;
        // 0x19d278: 0x8ce40010  lw          $a0, 0x10($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D274u, 0x19D27Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D27Cu;
label_19d27c:
    // 0x19d27c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19d280:
    // 0x19d280: 0x3e00008  jr          $ra
label_19d284:
    if (ctx->pc == 0x19D284u) {
        ctx->pc = 0x19D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D280u;
        // 0x19d284: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D288u;
        goto label_fallthrough_0x19d280;
    }
    ctx->pc = 0x19D280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D280u;
        // 0x19d284: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19d280:
    ctx->pc = 0x19D288u;
}
