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

// Function: ApMCardDataLoadSingle__FP8ApcMCardi
// Address: 0x11cb48 - 0x11cc10
void ApMCardDataLoadSingle__FP8ApcMCardi_0x11cb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMCardDataLoadSingle__FP8ApcMCardi_0x11cb48");
#endif

    switch (ctx->pc) {
        case 0x11cb60u: goto label_11cb60;
        case 0x11cbb8u: goto label_11cbb8;
        case 0x11cc04u: goto label_11cc04;
        default: break;
    }

    ctx->pc = 0x11cb48u;

    // 0x11cb48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11cb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11cb4c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11cb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11cb50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11cb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11cb54: 0x2442c180  addiu       $v0, $v0, -0x3E80
    ctx->pc = 0x11cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951296));
    // 0x11cb58: 0x24834600  addiu       $v1, $a0, 0x4600
    ctx->pc = 0x11cb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 17920));
    // 0x11cb5c: 0x248649c0  addiu       $a2, $a0, 0x49C0
    ctx->pc = 0x11cb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 18880));
label_11cb60:
    // 0x11cb60: 0xdc670000  ld          $a3, 0x0($v1)
    ctx->pc = 0x11cb60u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11cb64: 0xdc680008  ld          $t0, 0x8($v1)
    ctx->pc = 0x11cb64u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x11cb68: 0xdc690010  ld          $t1, 0x10($v1)
    ctx->pc = 0x11cb68u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x11cb6c: 0xdc6a0018  ld          $t2, 0x18($v1)
    ctx->pc = 0x11cb6cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x11cb70: 0xfc470000  sd          $a3, 0x0($v0)
    ctx->pc = 0x11cb70u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 7));
    // 0x11cb74: 0xfc480008  sd          $t0, 0x8($v0)
    ctx->pc = 0x11cb74u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 8));
    // 0x11cb78: 0xfc490010  sd          $t1, 0x10($v0)
    ctx->pc = 0x11cb78u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 9));
    // 0x11cb7c: 0xfc4a0018  sd          $t2, 0x18($v0)
    ctx->pc = 0x11cb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 10));
    // 0x11cb80: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x11cb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x11cb84: 0x0  nop
    ctx->pc = 0x11cb84u;
    // NOP
    // 0x11cb88: 0x0  nop
    ctx->pc = 0x11cb88u;
    // NOP
    // 0x11cb8c: 0x1466fff4  bne         $v1, $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x11CB8Cu;
    {
        const bool branch_taken_0x11cb8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x11CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB8Cu;
        // 0x11cb90: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb8c) {
            ctx->pc = 0x11CB60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11cb60;
        }
    }
    ctx->pc = 0x11CB94u;
    // 0x11cb94: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x11cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x11cb98: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x11cb98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x11cb9c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x11cb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11cba0: 0x2463c540  addiu       $v1, $v1, -0x3AC0
    ctx->pc = 0x11cba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952256));
    // 0x11cba4: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x11cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x11cba8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x11cba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cbac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11cbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11cbb0: 0x244572c0  addiu       $a1, $v0, 0x72C0
    ctx->pc = 0x11cbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 29376));
    // 0x11cbb4: 0x24424e00  addiu       $v0, $v0, 0x4E00
    ctx->pc = 0x11cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19968));
label_11cbb8:
    // 0x11cbb8: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x11cbb8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11cbbc: 0xdc470008  ld          $a3, 0x8($v0)
    ctx->pc = 0x11cbbcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11cbc0: 0xdc480010  ld          $t0, 0x10($v0)
    ctx->pc = 0x11cbc0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11cbc4: 0xdc490018  ld          $t1, 0x18($v0)
    ctx->pc = 0x11cbc4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x11cbc8: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x11cbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x11cbcc: 0xfcc70008  sd          $a3, 0x8($a2)
    ctx->pc = 0x11cbccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 7));
    // 0x11cbd0: 0xfcc80010  sd          $t0, 0x10($a2)
    ctx->pc = 0x11cbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 8));
    // 0x11cbd4: 0xfcc90018  sd          $t1, 0x18($a2)
    ctx->pc = 0x11cbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 9));
    // 0x11cbd8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x11cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x11cbdc: 0x0  nop
    ctx->pc = 0x11cbdcu;
    // NOP
    // 0x11cbe0: 0x0  nop
    ctx->pc = 0x11cbe0u;
    // NOP
    // 0x11cbe4: 0x1445fff4  bne         $v0, $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x11CBE4u;
    {
        const bool branch_taken_0x11cbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x11CBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CBE4u;
        // 0x11cbe8: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cbe4) {
            ctx->pc = 0x11CBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11cbb8;
        }
    }
    ctx->pc = 0x11CBECu;
    // 0x11cbec: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x11cbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cbf0: 0xdc4a0000  ld          $t2, 0x0($v0)
    ctx->pc = 0x11cbf0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11cbf4: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x11cbf4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11cbf8: 0xfcca0000  sd          $t2, 0x0($a2)
    ctx->pc = 0x11cbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 10));
    // 0x11cbfc: 0xc0452be  jal         func_114AF8
    ctx->pc = 0x11CBFCu;
    SET_GPR_U32(ctx, 31, 0x11CC04u);
    ctx->pc = 0x11CC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CBFCu;
    // 0x11cc00: 0xfcc30008  sd          $v1, 0x8($a2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114AF8u, 0x11CBFCu, 0x11CC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC04u;
label_11cc04:
    // 0x11cc04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11cc04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cc08: 0x3e00008  jr          $ra
    ctx->pc = 0x11CC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC08u;
        // 0x11cc0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CC10u;
}
