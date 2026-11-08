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

// Function: entry_0017f314
// Address: 0x17f314 - 0x17f358
void entry_0017f314_0x17f314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f314_0x17f314");
#endif

    ctx->pc = 0x17f314u;

    // 0x17f314: 0xe4e20008  swc1        $f2, 0x8($a3)
    ctx->pc = 0x17f314u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x17f318: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x17f318u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x17f31c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x17f31cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x17f320: 0x85220006  lh          $v0, 0x6($t1)
    ctx->pc = 0x17f320u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x17f324: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17F324u;
    {
        const bool branch_taken_0x17f324 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x17F328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F324u;
        // 0x17f328: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f324) {
            ctx->pc = 0x17F358u;
            return;
        }
    }
    ctx->pc = 0x17F32Cu;
    // 0x17f32c: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x17f32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x17f330: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x17f330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17f334: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x17f334u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17f338: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x17f338u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x17f33c: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x17f33cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x17f340: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x17f340u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x17f344: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x17f344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x17f348: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x17f348u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x17f34c: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x17f34cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x17f350: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17F350u;
    {
        const bool branch_taken_0x17f350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F350u;
        // 0x17f354: 0xace3000c  sw          $v1, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f350) {
            ctx->pc = 0x17F368u;
            return;
        }
    }
    ctx->pc = 0x17F358u;
}
