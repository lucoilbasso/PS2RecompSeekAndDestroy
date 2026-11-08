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

// Function: entry_001410e0
// Address: 0x1410e0 - 0x14111c
void entry_001410e0_0x1410e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001410e0_0x1410e0");
#endif

    ctx->pc = 0x1410e0u;

    // 0x1410e0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1410e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1410e4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1410E4u;
    {
        const bool branch_taken_0x1410e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1410E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1410E4u;
        // 0x1410e8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1410e4) {
            ctx->pc = 0x141150u;
            return;
        }
    }
    ctx->pc = 0x1410ECu;
    // 0x1410ec: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x1410ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1410f0: 0x32840400  andi        $a0, $s4, 0x400
    ctx->pc = 0x1410f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1024);
    // 0x1410f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1410f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1410f8: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1410F8u;
    {
        const bool branch_taken_0x1410f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1410FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1410F8u;
        // 0x1410fc: 0x24660030  addiu       $a2, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1410f8) {
            ctx->pc = 0x141130u;
            return;
        }
    }
    ctx->pc = 0x141100u;
    // 0x141100: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x141100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x141104: 0x32820800  andi        $v0, $s4, 0x800
    ctx->pc = 0x141104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2048);
    // 0x141108: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x141108u;
    {
        const bool branch_taken_0x141108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141108u;
        // 0x14110c: 0xae030060  sw          $v1, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141108) {
            ctx->pc = 0x14111Cu;
            return;
        }
    }
    ctx->pc = 0x141110u;
    // 0x141110: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x141110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x141114: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x141114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x141118: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x141118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    ctx->pc = 0x14111cu;
}
