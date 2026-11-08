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

// Function: entry_0012f940
// Address: 0x12f940 - 0x12f968
void entry_0012f940_0x12f940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f940_0x12f940");
#endif

    ctx->pc = 0x12f940u;

    // 0x12f940: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12f940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f944: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x12f944u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x12f948: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x12f948u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x12f94c: 0x2e2102b  sltu        $v0, $s7, $v0
    ctx->pc = 0x12f94cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12f950: 0x104000eb  beqz        $v0, . + 4 + (0xEB << 2)
    ctx->pc = 0x12F950u;
    {
        const bool branch_taken_0x12f950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F950u;
        // 0x12f954: 0x8e9400c4  lw          $s4, 0xC4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f950) {
            ctx->pc = 0x12FD00u;
            return;
        }
    }
    ctx->pc = 0x12F958u;
    // 0x12f958: 0x5680ff45  bnel        $s4, $zero, . + 4 + (-0xBB << 2)
    ctx->pc = 0x12F958u;
    {
        const bool branch_taken_0x12f958 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f958) {
            ctx->pc = 0x12F95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F958u;
            // 0x12f95c: 0x8e7100c8  lw          $s1, 0xC8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F670u;
            return;
        }
    }
    ctx->pc = 0x12F960u;
    // 0x12f960: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x12F960u;
    {
        const bool branch_taken_0x12f960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F960u;
        // 0x12f964: 0x8e62010c  lw          $v0, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f960) {
            ctx->pc = 0x12FD04u;
            return;
        }
    }
    ctx->pc = 0x12F968u;
}
