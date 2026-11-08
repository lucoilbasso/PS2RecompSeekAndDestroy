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

// Function: entry_00166264
// Address: 0x166264 - 0x1662b8
void entry_00166264_0x166264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166264_0x166264");
#endif

    ctx->pc = 0x166264u;

    // 0x166264: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x166264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x166268: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x166268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16626c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16626cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x166270: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x166270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x166274: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x166274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x166278: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x166278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x16627c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16627cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x166280: 0xe7b50050  swc1        $f21, 0x50($sp)
    ctx->pc = 0x166280u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x166284: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x166284u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x166288: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x166288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x16628c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x16628cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x166290: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x166290u;
    {
        const bool branch_taken_0x166290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x166294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166290u;
        // 0x166294: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x166290) {
            ctx->pc = 0x166370u;
            return;
        }
    }
    ctx->pc = 0x166298u;
    // 0x166298: 0x1c600007  bgtz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x166298u;
    {
        const bool branch_taken_0x166298 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x16629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166298u;
        // 0x16629c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166298) {
            ctx->pc = 0x1662B8u;
            return;
        }
    }
    ctx->pc = 0x1662A0u;
    // 0x1662a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1662a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1662a4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1662A4u;
    {
        const bool branch_taken_0x1662a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1662A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1662A4u;
        // 0x1662a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1662a4) {
            ctx->pc = 0x1662C8u;
            return;
        }
    }
    ctx->pc = 0x1662ACu;
    // 0x1662ac: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x1662ACu;
    {
        const bool branch_taken_0x1662ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1662B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1662ACu;
        // 0x1662b0: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1662ac) {
            ctx->pc = 0x1665A4u;
            return;
        }
    }
    ctx->pc = 0x1662B4u;
    // 0x1662b4: 0x0  nop
    ctx->pc = 0x1662b4u;
    // NOP
    ctx->pc = 0x1662b8u;
}
