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

// Function: entry_00137944
// Address: 0x137944 - 0x137984
void entry_00137944_0x137944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137944_0x137944");
#endif

    ctx->pc = 0x137944u;

    // 0x137944: 0x24022118  addiu       $v0, $zero, 0x2118
    ctx->pc = 0x137944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x137948: 0x14620042  bne         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x137948u;
    {
        const bool branch_taken_0x137948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x137948) {
            ctx->pc = 0x137A54u;
            return;
        }
    }
    ctx->pc = 0x137950u;
    // 0x137950: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x137950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x137954: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x137954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x137958: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x137958u;
    {
        const bool branch_taken_0x137958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137958u;
        // 0x13795c: 0x3414e000  ori         $s4, $zero, 0xE000 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137958) {
            ctx->pc = 0x137A54u;
            return;
        }
    }
    ctx->pc = 0x137960u;
    // 0x137960: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x137960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x137964: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x137964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137968: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x137968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x13796c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x13796cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x137970: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x137970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x137974: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137974u;
    {
        const bool branch_taken_0x137974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137974u;
        // 0x137978: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137974) {
            ctx->pc = 0x137984u;
            return;
        }
    }
    ctx->pc = 0x13797Cu;
    // 0x13797c: 0xc061920  jal         func_186480
    ctx->pc = 0x13797Cu;
    SET_GPR_U32(ctx, 31, 0x137984u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x13797Cu, 0x137984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137984u;
}
