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

// Function: entry_00178aec
// Address: 0x178aec - 0x178b18
void entry_00178aec_0x178aec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178aec_0x178aec");
#endif

    ctx->pc = 0x178aecu;

    // 0x178aec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x178aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x178af0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x178af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x178af4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x178af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x178af8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x178af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x178afc: 0x8c530024  lw          $s3, 0x24($v0)
    ctx->pc = 0x178afcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x178b00: 0x26701048  addiu       $s0, $s3, 0x1048
    ctx->pc = 0x178b00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4168));
    // 0x178b04: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x178b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x178b08: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x178B08u;
    {
        const bool branch_taken_0x178b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178B08u;
        // 0x178b0c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178b08) {
            ctx->pc = 0x178B4Cu;
            return;
        }
    }
    ctx->pc = 0x178B10u;
    // 0x178b10: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x178b10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x178b18u;
}
