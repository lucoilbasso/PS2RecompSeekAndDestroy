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

// Function: entry_0018ad08
// Address: 0x18ad08 - 0x18ad9c
void entry_0018ad08_0x18ad08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ad08_0x18ad08");
#endif

    ctx->pc = 0x18ad08u;

    // 0x18ad08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18ad08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad0c: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18ad0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18ad10: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x18ad10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x18ad14: 0x34a5000d  ori         $a1, $a1, 0xD
    ctx->pc = 0x18ad14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13);
    // 0x18ad18: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x18ad18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x18ad1c: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x18ad1cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x18ad20: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x18ad20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18ad24: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x18ad24u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x18ad28: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18ad28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18ad2c: 0x26a60150  addiu       $a2, $s5, 0x150
    ctx->pc = 0x18ad2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 336));
    // 0x18ad30: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x18ad30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x18ad34: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x18ad34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18ad38: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x18ad38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18ad3c: 0x8437c  dsll32      $t0, $t0, 13
    ctx->pc = 0x18ad3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 13));
    // 0x18ad40: 0xfe840008  sd          $a0, 0x8($s4)
    ctx->pc = 0x18ad40u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 4));
    // 0x18ad44: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x18ad44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x18ad48: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x18ad48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x18ad4c: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x18ad4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18ad50: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x18ad50u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x18ad54: 0x26b00020  addiu       $s0, $s5, 0x20
    ctx->pc = 0x18ad54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x18ad58: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x18ad58u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x18ad5c: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x18ad5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x18ad60: 0x2891823  subu        $v1, $s4, $t1
    ctx->pc = 0x18ad60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
    // 0x18ad64: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x18ad64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x18ad68: 0xdcc20018  ld          $v0, 0x18($a2)
    ctx->pc = 0x18ad68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x18ad6c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18ad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18ad70: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x18ad70u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x18ad74: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x18ad74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x18ad78: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x18ad78u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x18ad7c: 0xfd240008  sd          $a0, 0x8($t1)
    ctx->pc = 0x18ad7cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 4));
    // 0x18ad80: 0xfd230000  sd          $v1, 0x0($t1)
    ctx->pc = 0x18ad80u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x18ad84: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x18ad84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x18ad88: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x18ad88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x18ad8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AD8Cu;
    {
        const bool branch_taken_0x18ad8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AD8Cu;
        // 0x18ad90: 0x3a0b82d  daddu       $s7, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ad8c) {
            ctx->pc = 0x18AD9Cu;
            return;
        }
    }
    ctx->pc = 0x18AD94u;
    // 0x18ad94: 0xc061920  jal         func_186480
    ctx->pc = 0x18AD94u;
    SET_GPR_U32(ctx, 31, 0x18AD9Cu);
    ctx->pc = 0x18AD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AD94u;
    // 0x18ad98: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x18AD94u, 0x18AD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AD9Cu;
}
