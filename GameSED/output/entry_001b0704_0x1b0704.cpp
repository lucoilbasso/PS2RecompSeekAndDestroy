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

// Function: entry_001b0704
// Address: 0x1b0704 - 0x1b0740
void entry_001b0704_0x1b0704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0704_0x1b0704");
#endif

    ctx->pc = 0x1b0704u;

    // 0x1b0704: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1b0704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b0708: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B0708u;
    {
        const bool branch_taken_0x1b0708 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0708u;
        // 0x1b070c: 0x26428180  addiu       $v0, $s2, -0x7E80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294934912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0708) {
            ctx->pc = 0x1B0740u;
            return;
        }
    }
    ctx->pc = 0x1B0710u;
    // 0x1b0710: 0x26448180  addiu       $a0, $s2, -0x7E80
    ctx->pc = 0x1b0710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294934912));
    // 0x1b0714: 0xae20a970  sw          $zero, -0x5690($s1)
    ctx->pc = 0x1b0714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294945136), GPR_U32(ctx, 0));
    // 0x1b0718: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1b0718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1b071c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b071cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0720: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x1b0720u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x1b0724: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b0724u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0728: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b0728u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b072c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b072cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0730: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0734: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1b0734u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b0738: 0x806de38  j           func_1B78E0
    ctx->pc = 0x1B0738u;
    ctx->pc = 0x1B073Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0738u;
    // 0x1b073c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B78E0u;
    kputs_0x1b78e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1B0740u;
}
