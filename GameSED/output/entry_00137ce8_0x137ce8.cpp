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

// Function: entry_00137ce8
// Address: 0x137ce8 - 0x137d28
void entry_00137ce8_0x137ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137ce8_0x137ce8");
#endif

    ctx->pc = 0x137ce8u;

label_137ce8:
    // 0x137ce8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x137ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x137cec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x137cecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x137cf0: 0x0  nop
    ctx->pc = 0x137cf0u;
    // NOP
    // 0x137cf4: 0x0  nop
    ctx->pc = 0x137cf4u;
    // NOP
    // 0x137cf8: 0x0  nop
    ctx->pc = 0x137cf8u;
    // NOP
    // 0x137cfc: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x137CFCu;
    {
        const bool branch_taken_0x137cfc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x137D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137CFCu;
        // 0x137d00: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137cfc) {
            ctx->pc = 0x137CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137ce8;
        }
    }
    ctx->pc = 0x137D04u;
    // 0x137d04: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x137d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x137d08: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x137d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137d0c: 0x24910020  addiu       $s1, $a0, 0x20
    ctx->pc = 0x137d0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x137d10: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x137d10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x137d14: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x137d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x137d18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137D18u;
    {
        const bool branch_taken_0x137d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137D18u;
        // 0x137d1c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d18) {
            ctx->pc = 0x137D28u;
            return;
        }
    }
    ctx->pc = 0x137D20u;
    // 0x137d20: 0xc061920  jal         func_186480
    ctx->pc = 0x137D20u;
    SET_GPR_U32(ctx, 31, 0x137D28u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x137D20u, 0x137D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137D28u;
}
