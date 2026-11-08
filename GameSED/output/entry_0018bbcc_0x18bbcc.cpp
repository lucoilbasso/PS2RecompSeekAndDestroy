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

// Function: entry_0018bbcc
// Address: 0x18bbcc - 0x18bc60
void entry_0018bbcc_0x18bbcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018bbcc_0x18bbcc");
#endif

    ctx->pc = 0x18bbccu;

    // 0x18bbcc: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x18bbccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18bbd0: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x18bbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x18bbd4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x18bbd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bbd8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18bbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18bbdc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x18bbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x18bbe0: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x18bbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x18bbe4: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x18bbe4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x18bbe8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x18bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18bbec: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x18bbecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x18bbf0: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x18bbf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18bbf4: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x18bbf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x18bbf8: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x18bbf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18bbfc: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x18bbfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x18bc00: 0x2091823  subu        $v1, $s0, $t1
    ctx->pc = 0x18bc00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x18bc04: 0xde260018  ld          $a2, 0x18($s1)
    ctx->pc = 0x18bc04u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x18bc08: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x18bc08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x18bc0c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x18bc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x18bc10: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18bc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18bc14: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x18bc14u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x18bc18: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x18bc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x18bc1c: 0x24040056  addiu       $a0, $zero, 0x56
    ctx->pc = 0x18bc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x18bc20: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x18bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x18bc24: 0xfce60000  sd          $a2, 0x0($a3)
    ctx->pc = 0x18bc24u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
    // 0x18bc28: 0xffa200a8  sd          $v0, 0xA8($sp)
    ctx->pc = 0x18bc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 2));
    // 0x18bc2c: 0x26950020  addiu       $s5, $s4, 0x20
    ctx->pc = 0x18bc2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x18bc30: 0xfd250008  sd          $a1, 0x8($t1)
    ctx->pc = 0x18bc30u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 5));
    // 0x18bc34: 0xfd230000  sd          $v1, 0x0($t1)
    ctx->pc = 0x18bc34u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x18bc38: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x18bc38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18bc3c: 0x96a30002  lhu         $v1, 0x2($s5)
    ctx->pc = 0x18bc3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x18bc40: 0xdfa500a8  ld          $a1, 0xA8($sp)
    ctx->pc = 0x18bc40u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x18bc44: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x18bc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x18bc48: 0x3063e000  andi        $v1, $v1, 0xE000
    ctx->pc = 0x18bc48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)57344);
    // 0x18bc4c: 0x82280b  movn        $a1, $a0, $v0
    ctx->pc = 0x18bc4cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x18bc50: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18BC50u;
    {
        const bool branch_taken_0x18bc50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BC50u;
        // 0x18bc54: 0xffa500a8  sd          $a1, 0xA8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bc50) {
            ctx->pc = 0x18BC60u;
            return;
        }
    }
    ctx->pc = 0x18BC58u;
    // 0x18bc58: 0xc061920  jal         func_186480
    ctx->pc = 0x18BC58u;
    SET_GPR_U32(ctx, 31, 0x18BC60u);
    ctx->pc = 0x18BC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BC58u;
    // 0x18bc5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x18BC58u, 0x18BC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BC60u;
}
