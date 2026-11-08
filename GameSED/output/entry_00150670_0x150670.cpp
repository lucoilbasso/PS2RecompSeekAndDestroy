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

// Function: entry_00150670
// Address: 0x150670 - 0x1506c8
void entry_00150670_0x150670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150670_0x150670");
#endif

    ctx->pc = 0x150670u;

    // 0x150670: 0xc6150000  lwc1        $f21, 0x0($s0)
    ctx->pc = 0x150670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x150674: 0x4600a807  neg.s       $f0, $f21
    ctx->pc = 0x150674u;
    ctx->f[0] = FPU_NEG_S(ctx->f[21]);
    // 0x150678: 0x46180528  max.s       $f20, $f0, $f24
    ctx->pc = 0x150678u;
    ctx->f[20] = std::max(ctx->f[0], ctx->f[24]);
    // 0x15067c: 0x8e420690  lw          $v0, 0x690($s2)
    ctx->pc = 0x15067cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
    // 0x150680: 0x244419c0  addiu       $a0, $v0, 0x19C0
    ctx->pc = 0x150680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6592));
    // 0x150684: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x150684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x150688: 0x50600029  beql        $v1, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x150688u;
    {
        const bool branch_taken_0x150688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150688) {
            ctx->pc = 0x15068Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150688u;
            // 0x15068c: 0x92430576  lbu         $v1, 0x576($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1398)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150730u;
            return;
        }
    }
    ctx->pc = 0x150690u;
    // 0x150690: 0x8e420180  lw          $v0, 0x180($s2)
    ctx->pc = 0x150690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
    // 0x150694: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x150694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x150698: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x150698u;
    {
        const bool branch_taken_0x150698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150698) {
            ctx->pc = 0x15069Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150698u;
            // 0x15069c: 0x92430576  lbu         $v1, 0x576($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1398)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150730u;
            return;
        }
    }
    ctx->pc = 0x1506A0u;
    // 0x1506a0: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x1506a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1506a4: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x1506A4u;
    {
        const bool branch_taken_0x1506a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1506a4) {
            ctx->pc = 0x1506A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1506A4u;
            // 0x1506a8: 0x92430576  lbu         $v1, 0x576($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1398)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150730u;
            return;
        }
    }
    ctx->pc = 0x1506ACu;
    // 0x1506ac: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1506acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1506b0: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x1506b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1506b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1506B4u;
    {
        const bool branch_taken_0x1506b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1506B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1506B4u;
        // 0x1506b8: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1506b4) {
            ctx->pc = 0x1506C8u;
            return;
        }
    }
    ctx->pc = 0x1506BCu;
    // 0x1506bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1506BCu;
    {
        const bool branch_taken_0x1506bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1506C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1506BCu;
        // 0x1506c0: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1506bc) {
            ctx->pc = 0x1506CCu;
            return;
        }
    }
    ctx->pc = 0x1506C4u;
    // 0x1506c4: 0x0  nop
    ctx->pc = 0x1506c4u;
    // NOP
    ctx->pc = 0x1506c8u;
}
