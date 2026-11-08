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

// Function: entry_001b7b00
// Address: 0x1b7b00 - 0x1b7b74
void entry_001b7b00_0x1b7b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7b00_0x1b7b00");
#endif

    switch (ctx->pc) {
        case 0x1b7b10u: goto label_1b7b10;
        case 0x1b7b20u: goto label_1b7b20;
        case 0x1b7b2cu: goto label_1b7b2c;
        default: break;
    }

    ctx->pc = 0x1b7b00u;

    // 0x1b7b00: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1b7b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b7b04: 0x24a57e78  addiu       $a1, $a1, 0x7E78
    ctx->pc = 0x1b7b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32376));
    // 0x1b7b08: 0xc06bc5c  jal         func_1AF170
    ctx->pc = 0x1B7B08u;
    SET_GPR_U32(ctx, 31, 0x1B7B10u);
    ctx->pc = 0x1B7B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7B08u;
    // 0x1b7b0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF170u, 0x1B7B08u, 0x1B7B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7B10u;
label_1b7b10:
    // 0x1b7b10: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1b7b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1b7b14: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1b7b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b7b18: 0xc06c01e  jal         func_1B0078
    ctx->pc = 0x1B7B18u;
    SET_GPR_U32(ctx, 31, 0x1B7B20u);
    ctx->pc = 0x1B7B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7B18u;
    // 0x1b7b1c: 0xac62bfd4  sw          $v0, -0x402C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950868), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0078u, 0x1B7B18u, 0x1B7B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7B20u;
label_1b7b20:
    // 0x1b7b20: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1b7b20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1b7b24: 0xc06be1c  jal         func_1AF870
    ctx->pc = 0x1B7B24u;
    SET_GPR_U32(ctx, 31, 0x1B7B2Cu);
    ctx->pc = 0x1AF870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF870u, 0x1B7B24u, 0x1B7B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7B2Cu;
label_1b7b2c:
    // 0x1b7b2c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B7B2Cu;
    {
        const bool branch_taken_0x1b7b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B2Cu;
        // 0x1b7b30: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7b2c) {
            ctx->pc = 0x1B7B74u;
            return;
        }
    }
    ctx->pc = 0x1B7B34u;
    // 0x1b7b34: 0x2685bfc0  addiu       $a1, $s4, -0x4040
    ctx->pc = 0x1b7b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950848));
    // 0x1b7b38: 0x2662bf00  addiu       $v0, $s3, -0x4100
    ctx->pc = 0x1b7b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950656));
    // 0x1b7b3c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b7b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7b40: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1b7b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1b7b44: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1b7b44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7b48: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1b7b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1b7b4c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1b7b4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7b50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b7b50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7b54: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b7b54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7b58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b7b58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7b5c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b7b5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7b60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b7b60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7b64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7b64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7b68: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x1b7b68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x1b7b6c: 0x806df7e  j           func_1B7DF8
    ctx->pc = 0x1B7B6Cu;
    ctx->pc = 0x1B7B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7B6Cu;
    // 0x1b7b70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7DF8u;
    sceSifSendCmd_0x1b7df8(rdram, ctx, runtime); return;
    ctx->pc = 0x1B7B74u;
}
