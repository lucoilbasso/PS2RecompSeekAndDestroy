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

// Function: dispSwitch
// Address: 0x174110 - 0x174154
void dispSwitch_0x174110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dispSwitch_0x174110");
#endif

    ctx->pc = 0x174110u;

    // 0x174110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174114: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x174114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174118: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x174118u;
    {
        const bool branch_taken_0x174118 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174118u;
        // 0x17411c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174118) {
            ctx->pc = 0x174128u;
            goto label_174128;
        }
    }
    ctx->pc = 0x174120u;
    // 0x174120: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x174120u;
    {
        const bool branch_taken_0x174120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174120u;
        // 0x174124: 0x8cc5002c  lw          $a1, 0x2C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174120) {
            ctx->pc = 0x17412Cu;
            goto label_17412c;
        }
    }
    ctx->pc = 0x174128u;
label_174128:
    // 0x174128: 0x8cc50028  lw          $a1, 0x28($a2)
    ctx->pc = 0x174128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_17412c:
    // 0x17412c: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x17412cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x174130: 0x2403fe00  addiu       $v1, $zero, -0x200
    ctx->pc = 0x174130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x174134: 0x30a501ff  andi        $a1, $a1, 0x1FF
    ctx->pc = 0x174134u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)511);
    // 0x174138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17413c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x17413cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x174140: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x174140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174144: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x174144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x174148: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x174148u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    // 0x17414c: 0x806aa42  j           func_1AA908
    ctx->pc = 0x17414Cu;
    ctx->pc = 0x174150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17414Cu;
    // 0x174150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA908u;
    sceGsPutDispEnv_0x1aa908(rdram, ctx, runtime); return;
    ctx->pc = 0x174154u;
}
