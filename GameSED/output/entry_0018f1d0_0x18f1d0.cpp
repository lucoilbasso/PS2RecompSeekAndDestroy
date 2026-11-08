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

// Function: entry_0018f1d0
// Address: 0x18f1d0 - 0x18f238
void entry_0018f1d0_0x18f1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f1d0_0x18f1d0");
#endif

    ctx->pc = 0x18f1d0u;

    // 0x18f1d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18f1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18f1d4: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x18f1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x18f1d8: 0xa5000000  sh          $zero, 0x0($t0)
    ctx->pc = 0x18f1d8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x18f1dc: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x18f1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x18f1e0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x18f1e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f1e4: 0x90e3ee48  lbu         $v1, -0x11B8($a3)
    ctx->pc = 0x18f1e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294962760)));
    // 0x18f1e8: 0xa1020003  sb          $v0, 0x3($t0)
    ctx->pc = 0x18f1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x18f1ec: 0xa1030002  sb          $v1, 0x2($t0)
    ctx->pc = 0x18f1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x18f1f0: 0x8c82d630  lw          $v0, -0x29D0($a0)
    ctx->pc = 0x18f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x25D630u));
    // 0x18f1f4: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x18f1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
    // 0x18f1f8: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x18f1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x18f1fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f200: 0xa5050008  sh          $a1, 0x8($t0)
    ctx->pc = 0x18f200u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x18f204: 0xa511000a  sh          $s1, 0xA($t0)
    ctx->pc = 0x18f204u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 10), (uint16_t)GPR_U32(ctx, 17));
    // 0x18f208: 0xad000018  sw          $zero, 0x18($t0)
    ctx->pc = 0x18f208u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 0));
    // 0x18f20c: 0xad00001c  sw          $zero, 0x1C($t0)
    ctx->pc = 0x18f20cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 0));
    // 0x18f210: 0xad000020  sw          $zero, 0x20($t0)
    ctx->pc = 0x18f210u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 0));
    // 0x18f214: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x18F214u;
    {
        const bool branch_taken_0x18f214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18F218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F214u;
        // 0x18f218: 0xad000024  sw          $zero, 0x24($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f214) {
            ctx->pc = 0x18F258u;
            return;
        }
    }
    ctx->pc = 0x18F21Cu;
    // 0x18f21c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x18f21cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x18f220: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18F220u;
    {
        const bool branch_taken_0x18f220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F220u;
        // 0x18f224: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f220) {
            ctx->pc = 0x18F238u;
            return;
        }
    }
    ctx->pc = 0x18F228u;
    // 0x18f228: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x18F228u;
    {
        const bool branch_taken_0x18f228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f228) {
            ctx->pc = 0x18F22Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F228u;
            // 0x18f22c: 0xfd000028  sd          $zero, 0x28($t0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 8), 40), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F284u;
            return;
        }
    }
    ctx->pc = 0x18F230u;
    // 0x18f230: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x18F230u;
    {
        const bool branch_taken_0x18f230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F230u;
        // 0x18f234: 0x95020008  lhu         $v0, 0x8($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f230) {
            ctx->pc = 0x18F288u;
            return;
        }
    }
    ctx->pc = 0x18F238u;
}
