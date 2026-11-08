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

// Function: entry_0018d988
// Address: 0x18d988 - 0x18d9c0
void entry_0018d988_0x18d988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d988_0x18d988");
#endif

    ctx->pc = 0x18d988u;

    // 0x18d988: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x18d988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x18d98c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x18d98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x18d990: 0x50600039  beql        $v1, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x18D990u;
    {
        const bool branch_taken_0x18d990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d990) {
            ctx->pc = 0x18D994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D990u;
            // 0x18d994: 0x82660000  lb          $a2, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DA78u;
            return;
        }
    }
    ctx->pc = 0x18D998u;
    // 0x18d998: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x18d998u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18d99c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18d99cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d9a0: 0x2462ffd0  addiu       $v0, $v1, -0x30
    ctx->pc = 0x18d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x18d9a4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x18d9a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x18d9a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18D9A8u;
    {
        const bool branch_taken_0x18d9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9A8u;
        // 0x18d9ac: 0x32600  sll         $a0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d9a8) {
            ctx->pc = 0x18D9C0u;
            return;
        }
    }
    ctx->pc = 0x18D9B0u;
    // 0x18d9b0: 0x41503  sra         $v0, $a0, 20
    ctx->pc = 0x18d9b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 20));
    // 0x18d9b4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18d9b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x18d9b8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x18D9B8u;
    {
        const bool branch_taken_0x18d9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9B8u;
        // 0x18d9bc: 0x2446fd00  addiu       $a2, $v0, -0x300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d9b8) {
            ctx->pc = 0x18D9F8u;
            return;
        }
    }
    ctx->pc = 0x18D9C0u;
}
