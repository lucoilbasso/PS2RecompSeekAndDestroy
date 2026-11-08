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

// Function: entry_001cfeb8
// Address: 0x1cfeb8 - 0x1cff10
void entry_001cfeb8_0x1cfeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfeb8_0x1cfeb8");
#endif

    ctx->pc = 0x1cfeb8u;

    // 0x1cfeb8: 0x8e0b000c  lw          $t3, 0xC($s0)
    ctx->pc = 0x1cfeb8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cfebc: 0x2114821  addu        $t1, $s0, $s1
    ctx->pc = 0x1cfebcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1cfec0: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x1cfec0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1cfec4: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1cfec4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x1cfec8: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x1cfec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1cfecc: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x1cfeccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cfed0: 0x25e5e1c0  addiu       $a1, $t7, -0x1E40
    ctx->pc = 0x1cfed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), 4294959552));
    // 0x1cfed4: 0x36220001  ori         $v0, $s1, 0x1
    ctx->pc = 0x1cfed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x1cfed8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1cfed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1cfedc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1cfedcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1cfee0: 0x1273021  addu        $a2, $t1, $a3
    ctx->pc = 0x1cfee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x1cfee4: 0xad0b000c  sw          $t3, 0xC($t0)
    ctx->pc = 0x1cfee4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 11));
    // 0x1cfee8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cfee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfeec: 0xad680008  sw          $t0, 0x8($t3)
    ctx->pc = 0x1cfeecu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 8));
    // 0x1cfef0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1cfef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1cfef4: 0xaca9000c  sw          $t1, 0xC($a1)
    ctx->pc = 0x1cfef4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 9));
    // 0x1cfef8: 0xaca90008  sw          $t1, 0x8($a1)
    ctx->pc = 0x1cfef8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 9));
    // 0x1cfefc: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x1cfefcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
    // 0x1cff00: 0xad250008  sw          $a1, 0x8($t1)
    ctx->pc = 0x1cff00u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 5));
    // 0x1cff04: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x1cff04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x1cff08: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1CFF08u;
    {
        const bool branch_taken_0x1cff08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF08u;
        // 0x1cff0c: 0xad25000c  sw          $a1, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff08) {
            ctx->pc = 0x1CFF64u;
            return;
        }
    }
    ctx->pc = 0x1CFF10u;
}
