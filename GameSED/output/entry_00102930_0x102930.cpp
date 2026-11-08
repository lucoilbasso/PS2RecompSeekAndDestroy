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

// Function: entry_00102930
// Address: 0x102930 - 0x102980
void entry_00102930_0x102930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102930_0x102930");
#endif

    switch (ctx->pc) {
        case 0x102938u: goto label_102938;
        case 0x102944u: goto label_102944;
        default: break;
    }

    ctx->pc = 0x102930u;

    // 0x102930: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x102930u;
    SET_GPR_U32(ctx, 31, 0x102938u);
    ctx->pc = 0x102934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102930u;
    // 0x102934: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x102930u, 0x102938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102938u;
label_102938:
    // 0x102938: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x102938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10293c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10293Cu;
    SET_GPR_U32(ctx, 31, 0x102944u);
    ctx->pc = 0x102940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10293Cu;
    // 0x102940: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10293Cu, 0x102944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102944u;
label_102944:
    // 0x102944: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x102944u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102948: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x102948u;
    {
        const bool branch_taken_0x102948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102948u;
        // 0x10294c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102948) {
            ctx->pc = 0x102980u;
            return;
        }
    }
    ctx->pc = 0x102950u;
    // 0x102950: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x102950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102954: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x102954u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102958: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x102958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10295c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10295cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102960: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x102960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x102964: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x102964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102968: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x102968u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10296c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10296cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102970: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x102970u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x102974: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x102974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102978: 0x80409b6  j           func_1026D8
    ctx->pc = 0x102978u;
    ctx->pc = 0x10297Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102978u;
    // 0x10297c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1026D8u;
    TankLoadDestroy__9ApcObjRscib_0x1026d8(rdram, ctx, runtime); return;
    ctx->pc = 0x102980u;
}
