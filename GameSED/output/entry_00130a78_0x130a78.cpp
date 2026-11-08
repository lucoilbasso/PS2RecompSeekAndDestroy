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

// Function: entry_00130a78
// Address: 0x130a78 - 0x130ac8
void entry_00130a78_0x130a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130a78_0x130a78");
#endif

    ctx->pc = 0x130a78u;

    // 0x130a78: 0x10460048  beq         $v0, $a2, . + 4 + (0x48 << 2)
    ctx->pc = 0x130A78u;
    {
        const bool branch_taken_0x130a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x130A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A78u;
        // 0x130a7c: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130a78) {
            ctx->pc = 0x130B9Cu;
            return;
        }
    }
    ctx->pc = 0x130A80u;
    // 0x130a80: 0x8e0400f4  lw          $a0, 0xF4($s0)
    ctx->pc = 0x130a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x130a84: 0x2463a150  addiu       $v1, $v1, -0x5EB0
    ctx->pc = 0x130a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943056));
    // 0x130a88: 0xae0500f8  sw          $a1, 0xF8($s0)
    ctx->pc = 0x130a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 5));
    // 0x130a8c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x130a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x130a90: 0xae0600f0  sw          $a2, 0xF0($s0)
    ctx->pc = 0x130a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 6));
    // 0x130a94: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x130a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x130a98: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x130a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x130a9c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x130a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x130aa0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x130aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x130aa4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x130aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x130aa8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x130aa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130aac: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x130aacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x130ab0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x130ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x130ab4: 0xae06007c  sw          $a2, 0x7C($s0)
    ctx->pc = 0x130ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 6));
    // 0x130ab8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x130AB8u;
    {
        const bool branch_taken_0x130ab8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130AB8u;
        // 0x130abc: 0xae050078  sw          $a1, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ab8) {
            ctx->pc = 0x130AC8u;
            return;
        }
    }
    ctx->pc = 0x130AC0u;
    // 0x130ac0: 0x54c0000a  bnel        $a2, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x130AC0u;
    {
        const bool branch_taken_0x130ac0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x130ac0) {
            ctx->pc = 0x130AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130AC0u;
            // 0x130ac4: 0x8e04007c  lw          $a0, 0x7C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130AECu;
            return;
        }
    }
    ctx->pc = 0x130AC8u;
}
