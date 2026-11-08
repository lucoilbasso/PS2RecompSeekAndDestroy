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

// Function: entry_00113e3c
// Address: 0x113e3c - 0x113e78
void entry_00113e3c_0x113e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113e3c_0x113e3c");
#endif

    ctx->pc = 0x113e3cu;

    // 0x113e3c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x113e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x113e40: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x113e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x113e44: 0x480001d  bltz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x113E44u;
    {
        const bool branch_taken_0x113e44 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x113E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E44u;
        // 0x113e48: 0xa4400022  sh          $zero, 0x22($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 34), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e44) {
            ctx->pc = 0x113EBCu;
            return;
        }
    }
    ctx->pc = 0x113E4Cu;
    // 0x113e4c: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x113e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x113e50: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x113e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x113e54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x113e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x113e58: 0x8c423630  lw          $v0, 0x3630($v0)
    ctx->pc = 0x113e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
    // 0x113e5c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x113E5Cu;
    {
        const bool branch_taken_0x113e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E5Cu;
        // 0x113e60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e5c) {
            ctx->pc = 0x113EC0u;
            return;
        }
    }
    ctx->pc = 0x113E64u;
    // 0x113e64: 0x8c4201ac  lw          $v0, 0x1AC($v0)
    ctx->pc = 0x113e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x113e68: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x113E68u;
    {
        const bool branch_taken_0x113e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113e68) {
            ctx->pc = 0x113E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113E68u;
            // 0x113e6c: 0xac400024  sw          $zero, 0x24($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113EC0u;
            return;
        }
    }
    ctx->pc = 0x113E70u;
    // 0x113e70: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x113E70u;
    {
        const bool branch_taken_0x113e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E70u;
        // 0x113e74: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e70) {
            ctx->pc = 0x113EC4u;
            return;
        }
    }
    ctx->pc = 0x113E78u;
}
