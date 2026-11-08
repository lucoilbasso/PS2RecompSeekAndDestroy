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

// Function: entry_00138330
// Address: 0x138330 - 0x13837c
void entry_00138330_0x138330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138330_0x138330");
#endif

    ctx->pc = 0x138330u;

label_138330:
    // 0x138330: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x138330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x138334: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x138334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x138338: 0x0  nop
    ctx->pc = 0x138338u;
    // NOP
    // 0x13833c: 0x0  nop
    ctx->pc = 0x13833cu;
    // NOP
    // 0x138340: 0x0  nop
    ctx->pc = 0x138340u;
    // NOP
    // 0x138344: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x138344u;
    {
        const bool branch_taken_0x138344 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x138348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138344u;
        // 0x138348: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138344) {
            ctx->pc = 0x138330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138330;
        }
    }
    ctx->pc = 0x13834Cu;
    // 0x13834c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13834cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138350: 0x10c2000d  beq         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x138350u;
    {
        const bool branch_taken_0x138350 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x138350) {
            ctx->pc = 0x138388u;
            return;
        }
    }
    ctx->pc = 0x138358u;
    // 0x138358: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x138358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x13835c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x13835cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138360: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x138360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x138364: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x138364u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x138368: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x138368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x13836c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13836Cu;
    {
        const bool branch_taken_0x13836c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13836c) {
            ctx->pc = 0x13837Cu;
            return;
        }
    }
    ctx->pc = 0x138374u;
    // 0x138374: 0xc061920  jal         func_186480
    ctx->pc = 0x138374u;
    SET_GPR_U32(ctx, 31, 0x13837Cu);
    ctx->pc = 0x138378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138374u;
    // 0x138378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x138374u, 0x13837Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13837Cu;
}
