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

// Function: entry_001ab744
// Address: 0x1ab744 - 0x1ab7a8
void entry_001ab744_0x1ab744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab744_0x1ab744");
#endif

    switch (ctx->pc) {
        case 0x1ab74cu: goto label_1ab74c;
        case 0x1ab758u: goto label_1ab758;
        default: break;
    }

    ctx->pc = 0x1ab744u;

    // 0x1ab744: 0xc06bde0  jal         func_1AF780
    ctx->pc = 0x1AB744u;
    SET_GPR_U32(ctx, 31, 0x1AB74Cu);
    ctx->pc = 0x1AF780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF780u, 0x1AB744u, 0x1AB74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB74Cu;
label_1ab74c:
    // 0x1ab74c: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x1ab74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1ab750: 0xc06bde8  jal         func_1AF7A0
    ctx->pc = 0x1AB750u;
    SET_GPR_U32(ctx, 31, 0x1AB758u);
    ctx->pc = 0x1AB754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB750u;
    // 0x1ab754: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF7A0u, 0x1AB750u, 0x1AB758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB758u;
label_1ab758:
    // 0x1ab758: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1ab758u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab75c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ab75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ab760: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x1ab760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x1ab764: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1ab764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1ab768: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1ab768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1ab76c: 0x34639020  ori         $v1, $v1, 0x9020
    ctx->pc = 0x1ab76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36896);
    // 0x1ab770: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x1ab770u;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 4));
    // 0x1ab774: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1ab774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1ab778: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1ab778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ab77c: 0x2851024  and         $v0, $s4, $a1
    ctx->pc = 0x1ab77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 5));
    // 0x1ab780: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1ab780u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1ab784: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AB784u;
    {
        const bool branch_taken_0x1ab784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1AB788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB784u;
        // 0x1ab788: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab784) {
            ctx->pc = 0x1AB7A8u;
            return;
        }
    }
    ctx->pc = 0x1AB78Cu;
    // 0x1ab78c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1ab78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1ab790: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ab790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ab794: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ab794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ab798: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x1ab798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x1ab79c: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x1ab79cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
    // 0x1ab7a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1AB7A0u;
    {
        const bool branch_taken_0x1ab7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB7A0u;
        // 0x1ab7a4: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab7a0) {
            ctx->pc = 0x1AB7B8u;
            return;
        }
    }
    ctx->pc = 0x1AB7A8u;
}
