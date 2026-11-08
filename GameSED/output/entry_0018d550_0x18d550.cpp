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

// Function: entry_0018d550
// Address: 0x18d550 - 0x18d580
void entry_0018d550_0x18d550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d550_0x18d550");
#endif

    ctx->pc = 0x18d550u;

    // 0x18d550: 0x14c20053  bne         $a2, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x18D550u;
    {
        const bool branch_taken_0x18d550 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x18D554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D550u;
        // 0x18d554: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d550) {
            ctx->pc = 0x18D6A0u;
            return;
        }
    }
    ctx->pc = 0x18D558u;
    // 0x18d558: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x18d558u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18d55c: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x18d55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x18d560: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x18d560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x18d564: 0x2c820009  sltiu       $v0, $a0, 0x9
    ctx->pc = 0x18d564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x18d568: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x18D568u;
    {
        const bool branch_taken_0x18d568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D568u;
        // 0x18d56c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d568) {
            ctx->pc = 0x18D5B0u;
            return;
        }
    }
    ctx->pc = 0x18D570u;
    // 0x18d570: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x18d570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x18d574: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x18D574u;
    {
        const bool branch_taken_0x18d574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18d574) {
            ctx->pc = 0x18D578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D574u;
            // 0x18d578: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D5B8u;
            return;
        }
    }
    ctx->pc = 0x18D57Cu;
    // 0x18d57c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18d57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18d580u;
}
