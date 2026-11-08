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

// Function: entry_00116878
// Address: 0x116878 - 0x1168d8
void entry_00116878_0x116878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116878_0x116878");
#endif

    ctx->pc = 0x116878u;

    // 0x116878: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x116878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x11687c: 0x240224d0  addiu       $v0, $zero, 0x24D0
    ctx->pc = 0x11687cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x116880: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x116880u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x116884: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x116884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x116888: 0x8ca50044  lw          $a1, 0x44($a1)
    ctx->pc = 0x116888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x11688c: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x11688cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x116890: 0x2489c0f0  addiu       $t1, $a0, -0x3F10
    ctx->pc = 0x116890u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951152));
    // 0x116894: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x116894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x116898: 0x246ac540  addiu       $t2, $v1, -0x3AC0
    ctx->pc = 0x116898u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952256));
    // 0x11689c: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x11689cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x1EC0F0u));
    // 0x1168a0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1168a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x1168a4: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1168a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1168a8: 0x8f868d10  lw          $a2, -0x72F0($gp)
    ctx->pc = 0x1168a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1168ac: 0x8c430fec  lw          $v1, 0xFEC($v0)
    ctx->pc = 0x1168acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4076)));
    // 0x1168b0: 0x8cd60384  lw          $s6, 0x384($a2)
    ctx->pc = 0x1168b0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 900)));
    // 0x1168b4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1168b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1168b8: 0x10e40054  beq         $a3, $a0, . + 4 + (0x54 << 2)
    ctx->pc = 0x1168B8u;
    {
        const bool branch_taken_0x1168b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x1168BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1168B8u;
        // 0x1168bc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1168b8) {
            ctx->pc = 0x116A0Cu;
            return;
        }
    }
    ctx->pc = 0x1168C0u;
    // 0x1168c0: 0x24021268  addiu       $v0, $zero, 0x1268
    ctx->pc = 0x1168c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4712));
    // 0x1168c4: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x1168c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1168c8: 0x102f018  mult        $fp, $t0, $v0
    ctx->pc = 0x1168c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
    // 0x1168cc: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x1168ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1168d0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1168d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1168d4: 0x0  nop
    ctx->pc = 0x1168d4u;
    // NOP
    ctx->pc = 0x1168d8u;
}
