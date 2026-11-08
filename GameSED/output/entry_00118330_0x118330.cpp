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

// Function: entry_00118330
// Address: 0x118330 - 0x118384
void entry_00118330_0x118330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118330_0x118330");
#endif

    ctx->pc = 0x118330u;

label_118330:
    // 0x118330: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x118330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x118334: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x118334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x118338: 0x0  nop
    ctx->pc = 0x118338u;
    // NOP
    // 0x11833c: 0x0  nop
    ctx->pc = 0x11833cu;
    // NOP
    // 0x118340: 0x0  nop
    ctx->pc = 0x118340u;
    // NOP
    // 0x118344: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x118344u;
    {
        const bool branch_taken_0x118344 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x118348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118344u;
        // 0x118348: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118344) {
            ctx->pc = 0x118330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118330;
        }
    }
    ctx->pc = 0x11834Cu;
    // 0x11834c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x11834cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x118350: 0x2ae20003  slti        $v0, $s7, 0x3
    ctx->pc = 0x118350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x118354: 0x1440ff6a  bnez        $v0, . + 4 + (-0x96 << 2)
    ctx->pc = 0x118354u;
    {
        const bool branch_taken_0x118354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118354u;
        // 0x118358: 0x26d624d0  addiu       $s6, $s6, 0x24D0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 9424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118354) {
            ctx->pc = 0x118100u;
            return;
        }
    }
    ctx->pc = 0x11835Cu;
    // 0x11835c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11835cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x118360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118364: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x118364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x118368: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x118368u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11836c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11836cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x118370: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x118370u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118374: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x118374u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x118378: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x118378u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11837c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x11837cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x118380: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x118380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x118384u;
}
