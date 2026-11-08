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

// Function: entry_001cfa30
// Address: 0x1cfa30 - 0x1cfa88
void entry_001cfa30_0x1cfa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfa30_0x1cfa30");
#endif

    ctx->pc = 0x1cfa30u;

    // 0x1cfa30: 0x29020010  slti        $v0, $t0, 0x10
    ctx->pc = 0x1cfa30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1cfa34: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CFA34u;
    {
        const bool branch_taken_0x1cfa34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cfa34) {
            ctx->pc = 0x1CFA38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFA34u;
            // 0x1cfa38: 0x25e4e1c0  addiu       $a0, $t7, -0x1E40 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 4294959552));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFA88u;
            return;
        }
    }
    ctx->pc = 0x1CFA3Cu;
    // 0x1cfa3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cfa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfa40: 0x2114821  addu        $t1, $s0, $s1
    ctx->pc = 0x1cfa40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1cfa44: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x1cfa44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1cfa48: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1cfa48u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x1cfa4c: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x1cfa4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1cfa50: 0x25e5e1c0  addiu       $a1, $t7, -0x1E40
    ctx->pc = 0x1cfa50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), 4294959552));
    // 0x1cfa54: 0x36220001  ori         $v0, $s1, 0x1
    ctx->pc = 0x1cfa54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x1cfa58: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1cfa58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1cfa5c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1cfa5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1cfa60: 0x1273021  addu        $a2, $t1, $a3
    ctx->pc = 0x1cfa60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x1cfa64: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1cfa64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1cfa68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cfa68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfa6c: 0xaca9000c  sw          $t1, 0xC($a1)
    ctx->pc = 0x1cfa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 9));
    // 0x1cfa70: 0xaca90008  sw          $t1, 0x8($a1)
    ctx->pc = 0x1cfa70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 9));
    // 0x1cfa74: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x1cfa74u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
    // 0x1cfa78: 0xad250008  sw          $a1, 0x8($t1)
    ctx->pc = 0x1cfa78u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 5));
    // 0x1cfa7c: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x1cfa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x1cfa80: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x1CFA80u;
    {
        const bool branch_taken_0x1cfa80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA80u;
        // 0x1cfa84: 0xad25000c  sw          $a1, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfa80) {
            ctx->pc = 0x1CFF64u;
            return;
        }
    }
    ctx->pc = 0x1CFA88u;
}
