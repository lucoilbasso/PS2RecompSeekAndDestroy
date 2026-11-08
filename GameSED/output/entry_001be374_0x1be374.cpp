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

// Function: entry_001be374
// Address: 0x1be374 - 0x1be3cc
void entry_001be374_0x1be374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be374_0x1be374");
#endif

    switch (ctx->pc) {
        case 0x1be37cu: goto label_1be37c;
        case 0x1be384u: goto label_1be384;
        default: break;
    }

    ctx->pc = 0x1be374u;

    // 0x1be374: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x1BE374u;
    SET_GPR_U32(ctx, 31, 0x1BE37Cu);
    ctx->pc = 0x1BE378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE374u;
    // 0x1be378: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x1BE374u, 0x1BE37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE37Cu;
label_1be37c:
    // 0x1be37c: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1BE37Cu;
    SET_GPR_U32(ctx, 31, 0x1BE384u);
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1BE37Cu, 0x1BE384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE384u;
label_1be384:
    // 0x1be384: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1be384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1be388: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1be388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1be38c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1be38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1be390: 0x34a5b430  ori         $a1, $a1, 0xB430
    ctx->pc = 0x1be390u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46128);
    // 0x1be394: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x1be394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x1be398: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1be398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1be39c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1be39cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1be3a0: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x1be3a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x1be3a4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1be3a4u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0));
    // 0x1be3a8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1be3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1be3ac: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x1be3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x1be3b0: 0x24040105  addiu       $a0, $zero, 0x105
    ctx->pc = 0x1be3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x1be3b4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1be3b4u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 4));
    // 0x1be3b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE3B8u;
    {
        const bool branch_taken_0x1be3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE3B8u;
        // 0x1be3bc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be3b8) {
            ctx->pc = 0x1BE3CCu;
            return;
        }
    }
    ctx->pc = 0x1BE3C0u;
    // 0x1be3c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be3c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be3c4: 0x806dafa  j           func_1B6BE8
    ctx->pc = 0x1BE3C4u;
    ctx->pc = 0x1BE3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE3C4u;
    // 0x1be3c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BE8u;
    EIntr_0x1b6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1BE3CCu;
}
