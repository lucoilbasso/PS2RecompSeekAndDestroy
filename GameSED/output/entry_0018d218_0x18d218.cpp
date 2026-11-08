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

// Function: entry_0018d218
// Address: 0x18d218 - 0x18d248
void entry_0018d218_0x18d218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d218_0x18d218");
#endif

    ctx->pc = 0x18d218u;

    // 0x18d218: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x18d218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x18d21c: 0x14c20024  bne         $a2, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x18D21Cu;
    {
        const bool branch_taken_0x18d21c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x18D220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D21Cu;
        // 0x18d220: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d21c) {
            ctx->pc = 0x18D2B0u;
            return;
        }
    }
    ctx->pc = 0x18D224u;
    // 0x18d224: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x18d224u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18d228: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x18d228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x18d22c: 0x5443001c  bnel        $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x18D22Cu;
    {
        const bool branch_taken_0x18d22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18d22c) {
            ctx->pc = 0x18D230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D22Cu;
            // 0x18d230: 0x97c20004  lhu         $v0, 0x4($fp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D2A0u;
            return;
        }
    }
    ctx->pc = 0x18D234u;
    // 0x18d234: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x18d234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x18d238: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x18d238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x18d23c: 0x1464000f  bne         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x18D23Cu;
    {
        const bool branch_taken_0x18d23c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x18D240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D23Cu;
        // 0x18d240: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d23c) {
            ctx->pc = 0x18D27Cu;
            return;
        }
    }
    ctx->pc = 0x18D244u;
    // 0x18d244: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18d244u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18d248u;
}
