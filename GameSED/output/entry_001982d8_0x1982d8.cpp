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

// Function: entry_001982d8
// Address: 0x1982d8 - 0x198314
void entry_001982d8_0x1982d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001982d8_0x1982d8");
#endif

    ctx->pc = 0x1982d8u;

    // 0x1982d8: 0xae20022c  sw          $zero, 0x22C($s1)
    ctx->pc = 0x1982d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 556), GPR_U32(ctx, 0));
    // 0x1982dc: 0x8c6201c4  lw          $v0, 0x1C4($v1)
    ctx->pc = 0x1982dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 452)));
    // 0x1982e0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1982E0u;
    {
        const bool branch_taken_0x1982e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1982E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1982E0u;
        // 0x1982e4: 0x264403c0  addiu       $a0, $s2, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1982e0) {
            ctx->pc = 0x19834Cu;
            return;
        }
    }
    ctx->pc = 0x1982E8u;
    // 0x1982e8: 0x8e4203ec  lw          $v0, 0x3EC($s2)
    ctx->pc = 0x1982e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1004)));
    // 0x1982ec: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1982ECu;
    {
        const bool branch_taken_0x1982ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1982ec) {
            ctx->pc = 0x1982F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1982ECu;
            // 0x1982f0: 0x26230010  addiu       $v1, $s1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198350u;
            return;
        }
    }
    ctx->pc = 0x1982F4u;
    // 0x1982f4: 0x26930020  addiu       $s3, $s4, 0x20
    ctx->pc = 0x1982f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1982f8: 0x265003f0  addiu       $s0, $s2, 0x3F0
    ctx->pc = 0x1982f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1008));
    // 0x1982fc: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x1982fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x198300: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x198300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x198304: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x198304u;
    {
        const bool branch_taken_0x198304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198304u;
        // 0x198308: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198304) {
            ctx->pc = 0x198314u;
            return;
        }
    }
    ctx->pc = 0x19830Cu;
    // 0x19830c: 0xc061920  jal         func_186480
    ctx->pc = 0x19830Cu;
    SET_GPR_U32(ctx, 31, 0x198314u);
    ctx->pc = 0x198310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19830Cu;
    // 0x198310: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x19830Cu, 0x198314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198314u;
}
