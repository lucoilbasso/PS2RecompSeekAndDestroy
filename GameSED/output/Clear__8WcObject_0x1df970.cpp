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

// Function: Clear__8WcObject
// Address: 0x1df970 - 0x1dfa20
void Clear__8WcObject_0x1df970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__8WcObject_0x1df970");
#endif

    ctx->pc = 0x1df970u;

    // 0x1df970: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1df970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1df974: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1df974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1df978: 0x24870150  addiu       $a3, $a0, 0x150
    ctx->pc = 0x1df978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x1df97c: 0x3c080022  lui         $t0, 0x22
    ctx->pc = 0x1df97cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34 << 16));
    // 0x1df980: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1df980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1df984: 0xa4e00000  sh          $zero, 0x0($a3)
    ctx->pc = 0x1df984u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1df988: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1df988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1df98c: 0x2405ff80  addiu       $a1, $zero, -0x80
    ctx->pc = 0x1df98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x1df990: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x1df990u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x1df994: 0x9103ef28  lbu         $v1, -0x10D8($t0)
    ctx->pc = 0x1df994u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x21EF28u));
    // 0x1df998: 0xa0e50003  sb          $a1, 0x3($a3)
    ctx->pc = 0x1df998u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x1df99c: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x1df99cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1df9a0: 0x8cc2d630  lw          $v0, -0x29D0($a2)
    ctx->pc = 0x1df9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x25D630u));
    // 0x1df9a4: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1df9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1df9a8: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1df9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1df9ac: 0x24830160  addiu       $v1, $a0, 0x160
    ctx->pc = 0x1df9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x1df9b0: 0xdc46d610  ld          $a2, -0x29F0($v0)
    ctx->pc = 0x1df9b0u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x25D610u));
    // 0x1df9b4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1df9b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1df9b8: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x1df9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x1df9bc: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1df9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x1df9c0: 0xfc860180  sd          $a2, 0x180($a0)
    ctx->pc = 0x1df9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 384), GPR_U64(ctx, 6));
    // 0x1df9c4: 0xace00020  sw          $zero, 0x20($a3)
    ctx->pc = 0x1df9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
    // 0x1df9c8: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x1df9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x1df9cc: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x1df9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x1df9d0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1df9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1df9d4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1df9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1df9d8: 0x24820174  addiu       $v0, $a0, 0x174
    ctx->pc = 0x1df9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 372));
    // 0x1df9dc: 0x24830178  addiu       $v1, $a0, 0x178
    ctx->pc = 0x1df9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 376));
    // 0x1df9e0: 0x2485017c  addiu       $a1, $a0, 0x17C
    ctx->pc = 0x1df9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 380));
    // 0x1df9e4: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x1df9e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1df9e8: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x1df9e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1df9ec: 0xac8001a0  sw          $zero, 0x1A0($a0)
    ctx->pc = 0x1df9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 416), GPR_U32(ctx, 0));
    // 0x1df9f0: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x1df9f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1df9f4: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x1df9f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1df9f8: 0xac800190  sw          $zero, 0x190($a0)
    ctx->pc = 0x1df9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 400), GPR_U32(ctx, 0));
    // 0x1df9fc: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x1df9fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dfa00: 0xa4a00002  sh          $zero, 0x2($a1)
    ctx->pc = 0x1dfa00u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dfa04: 0xac800194  sw          $zero, 0x194($a0)
    ctx->pc = 0x1dfa04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 404), GPR_U32(ctx, 0));
    // 0x1dfa08: 0xac8001a4  sw          $zero, 0x1A4($a0)
    ctx->pc = 0x1dfa08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 420), GPR_U32(ctx, 0));
    // 0x1dfa0c: 0xac8001a8  sw          $zero, 0x1A8($a0)
    ctx->pc = 0x1dfa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 424), GPR_U32(ctx, 0));
    // 0x1dfa10: 0xac8001ac  sw          $zero, 0x1AC($a0)
    ctx->pc = 0x1dfa10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 428), GPR_U32(ctx, 0));
    // 0x1dfa14: 0xac800198  sw          $zero, 0x198($a0)
    ctx->pc = 0x1dfa14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 408), GPR_U32(ctx, 0));
    // 0x1dfa18: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA18u;
        // 0x1dfa1c: 0xac80019c  sw          $zero, 0x19C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 412), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFA20u;
}
