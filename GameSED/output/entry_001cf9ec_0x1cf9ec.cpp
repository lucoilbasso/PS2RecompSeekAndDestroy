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

// Function: entry_001cf9ec
// Address: 0x1cf9ec - 0x1cfa28
void entry_001cf9ec_0x1cf9ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf9ec_0x1cf9ec");
#endif

    ctx->pc = 0x1cf9ecu;

    // 0x1cf9ec: 0x25e2e1c0  addiu       $v0, $t7, -0x1E40
    ctx->pc = 0x1cf9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294959552));
    // 0x1cf9f0: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x1cf9f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1cf9f4: 0x12020080  beq         $s0, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x1CF9F4u;
    {
        const bool branch_taken_0x1cf9f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CF9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF9F4u;
        // 0x1cf9f8: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf9f4) {
            ctx->pc = 0x1CFBF8u;
            return;
        }
    }
    ctx->pc = 0x1CF9FCu;
    // 0x1cf9fc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cf9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cfa00: 0x433024  and         $a2, $v0, $v1
    ctx->pc = 0x1cfa00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1cfa04: 0xd1202b  sltu        $a0, $a2, $s1
    ctx->pc = 0x1cfa04u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1cfa08: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CFA08u;
    {
        const bool branch_taken_0x1cfa08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA08u;
        // 0x1cfa0c: 0xd11023  subu        $v0, $a2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfa08) {
            ctx->pc = 0x1CFA28u;
            return;
        }
    }
    ctx->pc = 0x1CFA10u;
    // 0x1cfa10: 0x2261023  subu        $v0, $s1, $a2
    ctx->pc = 0x1cfa10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x1cfa14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1cfa14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cfa18: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1cfa18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1cfa1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFA1Cu;
    {
        const bool branch_taken_0x1cfa1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA1Cu;
        // 0x1cfa20: 0x2402f  dsubu       $t0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfa1c) {
            ctx->pc = 0x1CFA30u;
            return;
        }
    }
    ctx->pc = 0x1CFA24u;
    // 0x1cfa24: 0x0  nop
    ctx->pc = 0x1cfa24u;
    // NOP
    ctx->pc = 0x1cfa28u;
}
