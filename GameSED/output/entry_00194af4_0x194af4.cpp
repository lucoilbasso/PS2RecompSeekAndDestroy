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

// Function: entry_00194af4
// Address: 0x194af4 - 0x194b24
void entry_00194af4_0x194af4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194af4_0x194af4");
#endif

    ctx->pc = 0x194af4u;

    // 0x194af4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x194af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x194af8: 0xae20022c  sw          $zero, 0x22C($s1)
    ctx->pc = 0x194af8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 556), GPR_U32(ctx, 0));
    // 0x194afc: 0x8c8201c4  lw          $v0, 0x1C4($a0)
    ctx->pc = 0x194afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 452)));
    // 0x194b00: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x194B00u;
    {
        const bool branch_taken_0x194b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B00u;
        // 0x194b04: 0x265003c0  addiu       $s0, $s2, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b00) {
            ctx->pc = 0x194B58u;
            return;
        }
    }
    ctx->pc = 0x194B08u;
    // 0x194b08: 0x26930020  addiu       $s3, $s4, 0x20
    ctx->pc = 0x194b08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x194b0c: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x194b0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x194b10: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x194b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x194b14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x194B14u;
    {
        const bool branch_taken_0x194b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B14u;
        // 0x194b18: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b14) {
            ctx->pc = 0x194B24u;
            return;
        }
    }
    ctx->pc = 0x194B1Cu;
    // 0x194b1c: 0xc061920  jal         func_186480
    ctx->pc = 0x194B1Cu;
    SET_GPR_U32(ctx, 31, 0x194B24u);
    ctx->pc = 0x194B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194B1Cu;
    // 0x194b20: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x194B1Cu, 0x194B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B24u;
}
