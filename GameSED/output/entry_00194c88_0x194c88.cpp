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

// Function: entry_00194c88
// Address: 0x194c88 - 0x194d40
void entry_00194c88_0x194c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194c88_0x194c88");
#endif

    switch (ctx->pc) {
        case 0x194d38u: goto label_194d38;
        default: break;
    }

    ctx->pc = 0x194c88u;

    // 0x194c88: 0x3c040007  lui         $a0, 0x7
    ctx->pc = 0x194c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7 << 16));
    // 0x194c8c: 0x3484130d  ori         $a0, $a0, 0x130D
    ctx->pc = 0x194c8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4877);
    // 0x194c90: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x194c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x194c94: 0xfd240000  sd          $a0, 0x0($t1)
    ctx->pc = 0x194c94u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 4));
    // 0x194c98: 0x27858c90  addiu       $a1, $gp, -0x7370
    ctx->pc = 0x194c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
    // 0x194c9c: 0xfd220008  sd          $v0, 0x8($t1)
    ctx->pc = 0x194c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 2));
    // 0x194ca0: 0x27838c80  addiu       $v1, $gp, -0x7380
    ctx->pc = 0x194ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937728));
    // 0x194ca4: 0x252a0010  addiu       $t2, $t1, 0x10
    ctx->pc = 0x194ca4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x194ca8: 0x2407004e  addiu       $a3, $zero, 0x4E
    ctx->pc = 0x194ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x194cac: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x194cacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x194cb0: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x194cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194cb4: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x194cb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x194cb8: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x194cb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x194cbc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x194cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x194cc0: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x194cc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194cc4: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x194cc4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x194cc8: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x194cc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x194ccc: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x194cccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194cd0: 0x14b3023  subu        $a2, $t2, $t3
    ctx->pc = 0x194cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x194cd4: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x194cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x194cd8: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x194cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x194cdc: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x194cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x194ce0: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x194ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x194ce4: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x194ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x194ce8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x194ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x194cec: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x194cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x194cf0: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x194cf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x194cf4: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x194cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x194cf8: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x194cf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x194cfc: 0xfd270008  sd          $a3, 0x8($t1)
    ctx->pc = 0x194cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 7));
    // 0x194d00: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x194d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x194d04: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x194d04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x194d08: 0x3200b  movn        $a0, $zero, $v1
    ctx->pc = 0x194d08u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x194d0c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x194d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x194d10: 0xfd240000  sd          $a0, 0x0($t1)
    ctx->pc = 0x194d10u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 4));
    // 0x194d14: 0xfd620008  sd          $v0, 0x8($t3)
    ctx->pc = 0x194d14u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 2));
    // 0x194d18: 0xfd650000  sd          $a1, 0x0($t3)
    ctx->pc = 0x194d18u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 5));
    // 0x194d1c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x194d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x194d20: 0x8ca201c4  lw          $v0, 0x1C4($a1)
    ctx->pc = 0x194d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 452)));
    // 0x194d24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x194D24u;
    {
        const bool branch_taken_0x194d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D24u;
        // 0x194d28: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d24) {
            ctx->pc = 0x194D40u;
            return;
        }
    }
    ctx->pc = 0x194D2Cu;
    // 0x194d2c: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x194d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x194d30: 0xc0663b6  jal         func_198ED8
    ctx->pc = 0x194D30u;
    SET_GPR_U32(ctx, 31, 0x194D38u);
    ctx->pc = 0x194D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194D30u;
    // 0x194d34: 0x24848de0  addiu       $a0, $a0, -0x7220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198ED8u, 0x194D30u, 0x194D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194D38u;
label_194d38:
    // 0x194d38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x194D38u;
    {
        const bool branch_taken_0x194d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D38u;
        // 0x194d3c: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d38) {
            ctx->pc = 0x194D50u;
            return;
        }
    }
    ctx->pc = 0x194D40u;
}
